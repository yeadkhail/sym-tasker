#include <bits/stdc++.h>
#include "header.h"


using namespace std;

int TaskEdit(void)
{
    string filename = dotsymfilestring();
    setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
    char *line1 = NULL;
    size_t len = 0;

    string ReplacedTask, ReplacementTask, ReplacementTaskDet, ReplacementTag, ReplacementDate;
    char DetAns, TagAns, DateAns;
    int i = 0, num1, num2, countdet = 0, counttag = 0, countdate = 0, count3 = 0, count = 0, changed = 0;
    input taskdata;
    ifstream read;
    read.open(filename);
    if(!read)
    {
        cout << "Failed to open File" << filename << endl;
        return 0;
    }
    ofstream foutTemp;
    foutTemp.open("&&&temp&&&.txt");
    if(!foutTemp)
    {
        cout << "Failed to open File" << "&&&temp&&&.txt" << endl;
        return 0;
    }

    cout << "What task do you want to edit?" << endl;
    setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
    //cin.ignore();
    getline(cin, ReplacedTask);
    cout << "What do you want to replace it with" << endl;
    setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
    //cin.ignore();
    getline(cin, ReplacementTask);
    cout << "Do you want to edit the details of the task?(y/n)" << endl;
    cin >> DetAns;
    if(DetAns == 'y')
    {
        countdet = 1;
        cout << "Input the new Task Details:" << endl;
        setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
        cin.ignore();
        getline(cin, ReplacementTaskDet);
    }
    cout << "Do you want to edit the tag of the task" << endl;
    cin >> TagAns;
    if(TagAns == 'y')
    {
        counttag = 1;
        cout << "Input the new Task Tag:" << endl;
        setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
        cin.ignore();
        getline(cin, ReplacementTag);
    }
    cout << "Do you want to edit the date of the task" << endl;
    cin >> DateAns;
    if(DateAns == 'y')
    {
        countdate = 1;
        cout << "Input the new Task Date:" << endl;
        setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
        cin.ignore();
        cin >> ReplacementDate;
    }

    string input;
    string part;
    while(!read.eof())
    {
        /*if(count3)
            break;*/
        int count2 = 0, count3 = 0;
        getline(read, input);
        if(input == "``tags``")
            count = 0;
        if(count)
        {
            istringstream iss(input);
            while(getline(iss,part,'^')){
                if(part == ReplacedTask){
                    part = ReplacementTask;
                    count3++, count2++, changed++;
                    foutTemp << part << '^';
                    continue;
                }
                if(count3)
                {
                    if(countdet && count2 == 2)
                    {
                        part = ReplacementTaskDet;
                    }
                    if(counttag && count2 == 3)
                    {
                        part = ReplacementTag;
                    }
                    if(countdate && count2 == 4)
                    {
                        part = ReplacementDate;
                    }
                }
                foutTemp << part;
                if(count2<5)
                    foutTemp << '^';
                count2++;

            }
            foutTemp << endl;
            continue;
        }

        foutTemp << input << endl;
        if(input == "``tasks``")
        {
            count = 1;
            continue;
        }
    }

    if(changed){
        cout << "Task updated successfuly!" << endl;

        read.close();
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
    }

    else
        cout << "Failed to find the tag" << endl;

    return 1;
}