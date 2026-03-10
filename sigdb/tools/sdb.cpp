#include <libsdb/libsdb.hpp>
#include <iostream>
#include <unistd.h>
#include <sys/ptrace.h>
#include <string_view>

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

        }

        return pid;
    }
}
int main(int argc, const char** argv){
    if(argc==1){
        std::cerr << "not args given\n";
        return -1;
    }

    pid_t pid = attach(argc, argv);
}