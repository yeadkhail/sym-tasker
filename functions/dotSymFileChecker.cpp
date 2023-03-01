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
    string homedir = getenv("HOME");
    string dotSym = "/.sym";
    //strcat(homedir,dotSym);
    ifstream checker;
    checker.open(homedir + dotSym);
    if(!checker)
    {
        return false;
    }
    else
    {
        return true;
    }

}
