#include<iostream>
#include<cstring>
#include<fstream>
#include <sstream>
#include <chrono>
#include <string>
#include "header.h"

using namespace std;

int FilesForTable(void)
{
    string filename = dotsymfilestring();
    input taskdata;
    int count = 0;
    ofstream f1,f2,f3,f4;
    f1.open("data1.txt");
    f2.open("data2.txt");
    f3.open("data3.txt");
    f4.open("data4.txt");
    if(!f1 && !f2 && !f3 && !f4)
    {
        cout << "Failed to open files" << endl;
        return 0;
    }
    ifstream read;
    read.open(filename);
    if(!read)
    {
        cout << "Failed to open file" << filename << endl;
    }

    string input;
    string part;
    while(!read.eof())
    {
        getline(read, input);
        if(count)
        {
            if(input == " ")
            {
                continue;
            }
            if(input.empty())
            {
                break;
            }
            istringstream iss(input);
            string gbg;
            getline(iss,gbg,'^');
            getline(iss,taskdata.taskname,'^');
            getline(iss,taskdata.taskdetail,'^');
            getline(iss,taskdata.tasktag,'^');
            getline(iss,taskdata.date,'^');
            getline(iss,taskdata.attachment,'^');
            // cout << "Name: " << taskdata.taskname << endl;
            // cout << "Detail: " << taskdata.taskdetail << endl;
            // cout << "Tag: " << taskdata.tasktag << endl;
            // cout << "Date: " << taskdata.date << endl;
            // cout << "Attachment: " << taskdata.attachment << endl;
            bool flagimp = isImportant(taskdata);
            bool flagurg = isUrgent(taskdata);
            bool flagexp = isExpired(taskdata);
            if(flagexp)
                continue;
            else if(flagimp && flagurg)
            {
                f1 << "* " << taskdata.taskname << endl;
            }
            else if(flagimp && !flagurg)
            {
                f2 << "* " << taskdata.taskname << endl;
            }
            else if(!flagimp && flagurg)
            {
                f3 << "* " << taskdata.taskname << endl;
            }
            else if(!flagimp && !flagurg)
            {
                f4 << "* " << taskdata.taskname << endl;
            }
        }
        if(input == "``tasks``")
            count = 1;
    }
    f1.close();
    f2.close();
    f3.close();
    f4.close();

    return 0;
}
