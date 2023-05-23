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
    FilesForTable();
    fileChangerForOutputTable();
    finalFileChangerForOutputTable();
    outputTable();
    int result1 = remove("d1.txt");
    int result2 = remove("d2.txt");
    int result3 = remove("d3.txt");
    int result4 = remove("d4.txt");
    int result5 = remove("d5.txt");
    int result6 = remove("d6.txt");
    int result7 = remove("data1.txt");
    int result8 = remove("data2.txt");
    int result9 = remove("data3.txt");
    int result0 = remove("data4.txt");
}