//
// Created by yead on 5/19/23.
//


#include<functions/input.h> // input structure
#include "header.h" // header file
#include<iostream>

input taskfromstring(string stringdata)
{
    string tasknum;
    istringstream iss(stringdata);
    input taskdata;
    getline(iss,tasknum,'^');
    getline(iss,taskdata.taskname,'^');
    getline(iss,taskdata.taskdetail,'^');
    getline(iss,taskdata.tasktag,'^');
    getline(iss,taskdata.date,'^');
    getline(iss,taskdata.attachment,'^');
    return taskdata;
}