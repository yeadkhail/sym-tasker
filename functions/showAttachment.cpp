//
// Created by yead on 5/21/23.
//
#include<iostream>
#include<fstream>
#include<cstring>
#include<sstream>
#include<header.h>
#include <chrono>
#include <csignal>
#include <unistd.h>

int showAttachment(input taskdata)
{
    using namespace std;
    char buffer[FILENAME_MAX];
    if (getcwd(buffer, sizeof(buffer)) != nullptr) {
        std::string currentDirName(buffer);
//        string filename = getFileName(taskdata.attachment);
//        string filepath = currentDirName + "/" + filename;
        bool flag = copyFile(taskdata.attachment, currentDirName);
        if(flag)
        {
            cout << "Attachment copied to the current directory" << endl;
        }
        else
        {
            cout << "Couldn't copy the file to the current directory" << endl;
            exit(-1);
        }
    }
    return 0;
}