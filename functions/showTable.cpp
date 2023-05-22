//
// Created by yead on 5/22/23.
//
#include <iostream>
#include <fstream>
#include <string>
#include "header.h"

void showTable()
{
    setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
    char *line = NULL;
    size_t len = 0;
    fileChangerForOutputTable();
    outputTable();
}