//
// Created by yead on 3/8/23.
//
#include<functions/input.h>
#include "header.h"

//string getFileName(const string& filePath) {
//    size_t lastSeparatorPos = filePath.find_last_of("/\\");
//    string fileName = filePath.substr(lastSeparatorPos + 1);
//    return fileName;
//}

input insertaskdata()
{
    using namespace std;
    setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
    char *line = NULL;
    size_t len = 0;
//    size_t read = getline(&line, &len, stdin);
    input taskdata;
    cout << "Input task name: ";
    getline(cin,taskdata.taskname);
    cout << "Enter task details: ";
    getline(cin, taskdata.taskdetail);
    cout<< "Enter the task tag: ";
    getline(cin,taskdata.tasktag);
    cout<< "Enter the date(dd/mm/yyyy): ";
    getline(cin,taskdata.date);
    cout<<"Do you want to attach an attachment?(y/n): ";
    char attach;
    cin >> attach;
    if(attach == 'y')
    {
        cout<<"Enter the full path of the attachment: ";
        string attachment;
        cin >> attachment;
        copyFile(attachment,attachmentfolderpathstring());
        string destinationFilePath = attachmentfolderpathstring() + getFileName(attachment);
        //cout << "hello" << endl;
        taskdata.attachment = destinationFilePath;
        cout<< taskdata.attachment;
    }
    else
        taskdata.attachment = "NULL";
    return taskdata;
}
