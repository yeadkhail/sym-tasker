#include<iostream>
#include<vector>
#include"header.h"
#include <cstring>
int main(int argc, char *argv[])
{
    using namespace std;
    if(argc==1) {
        asciiArtedName();
        if(dotSymFileChecker())
        {
            cout << endl;
        }
        else
        {
            cout << "\n\n\nNo .sym file found in the home directory";
        }


    }
    else if(argc==2) {
        if (strcmp(argv[1], "--help") == 0) {
            help();
        }
        else if(strcmp(argv[1],"--version") == 0) {
            version();
        }
    }
    return 0;
}
