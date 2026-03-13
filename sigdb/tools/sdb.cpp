#include <libsdb/libsdb.hpp>

#include <cstdlib>
#include <editline/readline.h>
#include <iostream>
#include <string>
#include <string_view>
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <editline/readline.h>
#include <string>
#include <vector>
#include <sstream>

namespace {

    //read text splits into smaller things by a chose delimter for example ',' or  ' ' etc..
    //returns a vector of strings 
    std::vector<std::string> split(std::string_view str, char delimeter){
        std::vector<std::string> out{};
        //treat string as a tream to use getline create using real string instread of string-view
        std::stringstream ss {std::string{str}};
        std::string item;

        while(std::getline(ss, item,delimeter)){
            out.push_back(item);
        }
        return out;
    }

    //check if a string is equal or a prefix to antoher string for exampe , 'c' of 'continue'
    bool is_prefix(std::string_view str, std::string_view of){
        if(str.size()>of.size()) return false;
        return std::equal(str.begin(),str.end(),of.begin());
    }

    //resume processs using ptrace
    void resume(pid_t pid){
        if(ptrace(PTRACE_CONT,pid,nullptr,nullptr)<0){
            std::cerr << "couldn't continue\n";
            std::exit(-1);
        }
    }

    void wait_on_signal(pid_t pid);

pid_t attach(int argc, const char** argv) {
    if (argc == 3 && argv[1] == std::string_view("-p")) {
        const pid_t pid = std::atoi(argv[2]);
        if (pid <= 0) {
            std::cerr << "invalid pid\n";
            return -1;
        }

        if (ptrace(PTRACE_ATTACH, pid, nullptr, nullptr) < 0) {
            std::perror("could not attach");
            return -1;
        }

        return pid;
    }

    const char* program_path = argv[1];
    pid_t pid = fork();
    if (pid < 0) {
        std::perror("fork failed");
        return -1;
    }

    if (pid == 0) {
        if (ptrace(PTRACE_TRACEME, 0, nullptr, nullptr) < 0) {
            std::perror("tracing failed");
            return -1;
        }

        if (execlp(program_path, program_path, nullptr) < 0) {
            std::perror("exec failed");
            return -1;
        }
    }

    return pid;
}
//handle user input
void handle_command(pid_t pid, std::string_view line){
      auto args =   split(line, ' '); // split lines by spaces
      auto command = args[0]; //first args is the command

      //if "c/cont/continue ,conitnue the process"
      if(is_prefix(command,"continue")){
        resume(pid);
        wait_on_signal(pid);
      }

      //handle unknown command/ unrecognized
      else{
        std::cerr << "Unknown command\n"; 
      }
}

}  // namespace

int main(int argc, const char** argv) {
    if (argc == 1) {
        std::cerr << "not args given\n";
        return -1;
    }

    const pid_t pid = attach(argc, argv);
    if (pid < 0) {
        return -1;
    }

    int wait_status;
    int options = 0;

    if (waitpid(pid, &wait_status, options) < 0) {
        std::perror("waitpid failed");
        return -1;
    }

    char *line = nullptr;
    //read input from user until EOF
    while ((line = readline("sdb> ")) != nullptr) {
        std::string line_str;

        //if input is empty, use last command from history
        if(line==std::string_view("")){
            free(line);
            if(history_length>0){
                line_str = history_list()[history_length-1]->line;
            }
        }
        //get input from user and add it to history
        else{
            line_str=line;
            add_history(line);
            free(line);
        }
        //if input is not empty, handle the command
        if(!line_str.empty()){
            handle_command(pid, line_str);
        }
    }

    return 0;
}
