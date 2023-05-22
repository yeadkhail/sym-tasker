#include <bits/stdc++.h>
#include "header.h"

using namespace std;

int history(void)
{
    string filename = dotsymfilestring();
    int count = 0, i = 0, att = 0,count2 = 0;
    input taskdata;
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
        i = 0;
        if(count)
        {
            if(input == " ")
                continue;
            if(input.empty())
                return 0;
            istringstream iss(input);
            while(getline(iss, part, '^'))
            {
                /*if(i == 0)
                {
                    cout << part;
                }*/
                if(i == 1)
                {
                    taskdata.taskname = part;
                }
                if(i == 2)
                {
                    taskdata.taskdetail = part;
                }
                if(i == 3)
                {
                    taskdata.tasktag = part;
                }
                if(i == 4)
                {
                    taskdata.date = part;
                }
                if(i == 5)
                {
                    att = 1;
                }
                i++;
            }

            count2++;
            cout << count2 << "/ Name: " << taskdata.taskname << " Details: " << taskdata.taskdetail << " Tag: " << taskdata.tasktag << " Date: " << taskdata.date << endl;
            if(att){
                cout << " There is an attachement in this task" << endl;
            }
        }

        if(input == "``tasks``")
            count = 1;
    }
    read.close();

    return 0;
}