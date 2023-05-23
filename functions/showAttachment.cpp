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
int findAttachment()
{
    input taskdata;
    setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
    char *line1 = NULL;
    size_t len = 0;
    int count = 0, found = 0;
    string filename = dotsymfilestring(), task;
    ifstream read;
    read.open(filename);
    if(!read)
    {
        cout << "Failed to open file" << filename << endl;
        return 0;
    }
    cout << "What task do you want to see the attachment of?" <<endl;
    getline(cin, task);
    string input;
    string part;
    while(!read.eof())
    {
        getline(read, input);
        if(found)
            break;
        if(count)
        {
            istringstream iss(input);
            while(getline(iss, part, '^'))
            {
                if(part == task)
                {
                    taskdata.taskname = part;
                    getline(iss, part, '^');
                    taskdata.taskdetail = part;
                    getline(iss, part, '^');
                    taskdata.tasktag = part;
                    getline(iss, part, '^');
                    taskdata.date = part;
                    getline(iss, part, '^');
                    taskdata.attachment = part;
                    count = 0;
                    found = 1;
                    break;
                }
            }
        }
        if(input == "``tasks``")
            count = 1;

    }
    showAttachment(taskdata);
    return 0;
}