#include <bits/stdc++.h>
#include "header.h"

using namespace std;

int showExpired(void)
{
    string filename = dotsymfilestring();
    int count = 0, found = 0;
    input taskdata;
    ifstream read;
    read.open(filename);
    if(!read)
    {
        cout << "Failed to open file" << filename << endl;
        return 0;
    }

    string input;
    string part;
    while(!read.eof())
    {
        getline(read, input);
        if(count)
        {
            if(input == " ")
                continue;
            if(input.empty())
                break;
            string tasknum;
            istringstream iss(input);
            getline(iss,tasknum,'^');
            getline(iss,taskdata.taskname,'^');
            getline(iss,taskdata.taskdetail,'^');
            getline(iss,taskdata.tasktag,'^');
            getline(iss,taskdata.date,'^');
            getline(iss,taskdata.attachment,'^');
            bool flag = isExpired(taskdata);
            if(flag)
            {
                cout << "Task: " << taskdata.taskname << " Task Detail: " << taskdata.taskdetail << " Task Tag: " << taskdata.tasktag <<" Task Date: " << taskdata.date << endl;
                found++;
            }
        }
        if(input == "``tasks``")
            count = 1;
    }
    if(!found)
        cout << "No expired tasks, good job!" << endl;
    read.close();
    return 0;
}