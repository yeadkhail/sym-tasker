#include <bits/stdc++.h>
#include "header.h"

using namespace std;

int TagDelete(void)
{
    string filename = dotsymfilestring();
    string tag;
    ifstream fin;
    ofstream foutTemp;
    int count = 0, changed = 0;
    int count2 = 0;

    cout << "What tag do you want to delete?" << endl;
    getline(cin, tag);
    fin.open(filename);
    if (!fin)
    {
        cout << "Error while opening file" << endl;
        exit(1);
    }
    foutTemp.open("&&&temp&&&.txt");
    if (!foutTemp)
    {
        cout << "Error while opening file" << endl;
        exit(1);
    }

    string input;
    string part;
    while(!fin.eof())
    {
        getline(fin, input);
        if(count)
        {
            istringstream iss(input);
            while(getline(iss,part,'^')){
                if(part == tag){
                    count2++;
                    break;

                }
            }
        }
        if(count2){
            count2--;
            continue;

        }
        foutTemp << input << endl;
        if(input == "``tags``")
        {
            count = 1;
            continue;
        }
    }

    fin.close();
    foutTemp.close();

    ifstream finTemp;
    ofstream foutMain;
    finTemp.open("&&&temp&&&.txt");
    foutMain.open(filename);
    if (!finTemp)
    {
        cout << "Error while opening file" << endl;
        exit(1);
    }
    if (!foutMain)
    {
        cout << "Error while opening file" << endl;
        exit(1);
    }
    while(!finTemp.eof())
    {
        getline(finTemp, input);
        foutMain << input <<endl;
    }

    finTemp.close();
    foutMain.close();


    int result = remove("&&&temp&&&.txt");


    return 0;
}