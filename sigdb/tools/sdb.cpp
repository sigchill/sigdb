#include <libsdb/libsdb.hpp>
#include <iostream>
#include <unistd.h>
#include <sys/ptrace.h>
#include <string_view>
#include <sys/types.h>
#include <sys/wait.h>

namespace{
    // attach to a process 
    pid_t attach(int argc, const char** argv){
        pid_t pid = 0;

        // if -p is given, attach to the process with the given pid
        if (argc==3 && argv[1] == std::string_view("-p")){
            pid = std::atoi(argv[2]); //convert string to numer (pid)

            if(pid<=0){
                std::cerr<<"invalid pid\n";
                return -1;
            }
        }
        if(ptrace(PTRACE_ATTACH,pid,/*addr=*/nullptr,/*data=*/nullptr)<0){
            std::perror("could not attach");
            return -1;
        }
        
        else{
            const char* program_path = argv[1];
            if((pid=fork())<0){
                std::perror("fork failed");
                return -1;
            }
            //checks if we are the child process
            if(pid==0){
                //allow to send more ptrace requests in the future
                if(ptrace(PTRACE_TRACEME,0,nullptr,nullptr)<0){
                    std::perror("tracing failed");
                    return -1;
            }
            if(execlp(program_path, program_path, nullptr)<0){
                std::perror("exec failed");
                return -1;
            }
        }

        return pid;
    }
}
int main(int argc, const char** argv){
    //no args
    if(argc==1){
        std::cerr << "not args given\n";
        return -1;
    }


    pid_t pid = attach(argc, argv);

    int wait_status;
    int options = 0;

    //wait for the process to stop after attaching to it
    if(waitpid(pid,&wait_status,options)<0){
        std:perror("waitpid failed");
    }

    
}