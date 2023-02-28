//
// Created by yead on 2/28/23.
//
#include<iostream>
#include<cstring>
#include<stdlib.h>
#include <fstream>

bool dotSymFileChecker()
{
    using namespace std;
    char *homedir = getenv("HOME");
    const char *dotSym = "/.sym";
    strcat(homedir,dotSym);
    ifstream checker;
    checker.open(homedir);
    if(!checker)
    {
        return false;
    }
    else
    {
        return true;
    }

}
