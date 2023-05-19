//
// Created by yead on 3/8/23.
//
#include<functions/input.h>
#include "header.h"

input insertaskdata()
{
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
        cin >> taskdata.attachment;
        copyFile(taskdata.attachment,attachmentfolderpathstring());
    }
    else
        taskdata.attachment = "NULL";
    return taskdata;
}
