#include <bits/stdc++.h>
#include "header.h"

using namespace std;

bool isImportant(input taskdata)
{
    string filename = dotsymfilestring();
    string imp = "";
    int value;
    int foundtag = 0, foundimp = 0, count = 0;
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
            istringstream iss(input);
            while(getline(iss, part, '^'))
            {
                if(part == taskdata.tasktag)
                {
                    foundtag = 1;
                    continue;
                }
                if(foundtag)
                {
                    imp = part;
                    break;
                }
            }
        }
        if(imp == "1"){
            return true;
        }
        else if(imp == "0")
        {
            return false;
        }
        if(input == "``tags``")
            count = 1;
        else if(input == "``input``")
            break;
    }


    read.close();
    return false;
}
