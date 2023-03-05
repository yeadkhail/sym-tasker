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
start:
            string input;
            cout << "Enter your command >> ";
            cin >> input;
            if(input != "exit" )
            {
                goto start;
            }
            else
            {

            }
        }
        else
        {
            cout << "\n\n\nNo .sym file found in the home directory";
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
