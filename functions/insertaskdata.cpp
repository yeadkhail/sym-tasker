//
// Created by yead on 3/8/23.
//
#include<functions/input.h>
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
    return taskdata;
}
