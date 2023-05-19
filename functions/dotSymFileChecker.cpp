//
// Created by yead on 2/28/23.
//
#include<iostream>
#include<cstring>
#include<cstdlib>
#include <fstream>
#include "header.h"

bool dotSymFileChecker()
{
    using namespace std;
    string homedir = dotsymfilestring();
    //strcat(homedir,dotSym);
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
