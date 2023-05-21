#include <bits/stdc++.h>
#include "header.h"

using namespace std;

void TagWise(void)
{
    string filename = dotsymfilestring();
    int count = 0, count2 = 3;
    ifstream read;
    string tag;
    read.open(filename);
    if(!read)
    {
        cout << "Failed to open file" << endl;
    }
    cout << "What tag do you want to search?" << endl;
    getline(cin, tag);
    vector<string> lines;
    string line;
    while(getline(read, line))
    {
        lines.push_back(line);
    }
    vector<string> l1;
    for(unsigned int i=0; i<lines.size(); i++)
    {
        if(lines[i] == "\0")
            count = 0;
        if(count){
            l1.push_back(lines[i]);
        }
        if(lines[i] == "``tasks``")
            count = 1;

    }
    string part1;
    string part2;
    for(unsigned int i=0; i<l1.size(); i++)
    {
        istringstream iss1(l1[i]);
        while(getline(iss1, part1, '^'))
        {
            if(part1 == tag)
            {
                //cout << l1[i] << endl;
                istringstream iss2(l1[i]);
                count2 = 3;
                while(getline(iss2, part2, '^') && count2)
                {
                    if(count2 == 1)
                        cout << part2 << endl;
                    count2--;
                }
                break;
            }
        }

    }
}