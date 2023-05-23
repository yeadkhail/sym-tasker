#include<iostream>
#include<vector>
#include"header.h"

#include <cstring>
int main(int argc, char *argv[])
{
    using namespace std;
    if(argc == 1) {
begin:
        asciiArtedName();
        if(dotSymFileChecker())
        {
            cout << endl;
            showTable();
start:
            string input;
            cout << "Enter your command >> ";
            cin >> input;
            if(input == "insert") insert();
            else if(input == "delete-task") TaskDelete();
            //else if(input == "update") updateTask();
            //else if(input == "show") showTask();
            else if(input == "help") help();
            else if(input == "version") version();
            else if(input == "randomizer") randomizer();
            else if(input == "edit-tag") TagEdit();
            else if(input =="delete-tag") TagDelete();
            else if(input == "insert-tag") TagInsert();
            else if(input == "search-tagwise") TagWise();
            else if(input == "show-attachment") findAttachment();
            else if(input == "exit") exit(0);
            else if(input == "clear") system("clear");  //system("cls");
            else cout << "Invalid command" << endl;
            if(input != "exit" )
            {
                goto start;
            }
        }
        else
        {
            cout << "\n\n\nNo .sym folder found in the home directory";
            cout<< "\nInitializing for the first time\n";
            initializer();
            goto begin;
        }
    }
    else if(argc==2) {
        if (strcmp(argv[1], "--help") == 0) {
            help();
        }
        else if(strcmp(argv[1],"--version") == 0) {
            version();
        }
        else if(strcmp(argv[1],"--randomizer")==0)
        {
            randomizer();
        }
    }
    return 0;
}
