#include <bits/stdc++.h>
#include "header.h"

using namespace std;

int TagEdit(void)
{
    setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
    char *line = NULL;
    size_t len = 0;
    string ReplacementText;
    string ReplacedText;
    ifstream fin;
    ofstream foutTemp;
    string filename = dotsymfilestring();
    int count = 0, changed = 0;
    char ImpIn;
    int countImp = 0;

    cout << "What tag do you want to edit?" << endl;
    getline(cin, ReplacedText);
    cout << "What do you want to replace it with" << endl;
    getline(cin, ReplacementText);
    cout << "Do you want to change it's importance?" << endl;
    cin >> ImpIn;
    if(ImpIn == 'y')
        countImp = 1;
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
        /*if(changed)
            break;*/
        int count2 = 0, count3 = 0;
        getline(fin, input);
        if(count)
        {
            istringstream iss(input);
            while(getline(iss,part,'^')){
                if(part == ReplacedText){
                    part = ReplacementText;
                    count3++, count2++;
                    foutTemp << part << '^';
                    continue;
                }
                if(count3)
                {
                    if(countImp)
                    {
                        if(part == "1")
                            part = "0";
                        else
                            part = "1";
                    }
                    count = 0;
                }
                foutTemp << part;
                if(count2<2)
                    foutTemp << '^';
                count2++;

            }
            foutTemp << endl;
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