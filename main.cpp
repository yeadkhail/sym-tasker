#include<iostream>
#include<vector>
#include"header.h"
#include <cstring>
int main(int argc, char *argv[])
{
    using namespace std;
    if(argc==1) {
        asciiArtedName();
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
