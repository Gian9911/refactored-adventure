//
// Created by gianluca on 17/09/19.
//


#ifndef GG_UTILITIES_H
#define GG_UTILITIES_H
#define RUNNING_LINUX
#include <iostream>
#include <string>
#include <algorithm>

namespace Utils{
#ifdef  RUNNING_LINUX
#include <unistd.h>
    inline std::string GetWorkingDirectory(){
        char cwd[1024];
        if(getcwd(cwd, sizeof(cwd)) != nullptr){
            return std::string(cwd) + std::string("/");
        }
        return "";
    }
#endif
}
#endif //GG_UTILITIES_H
