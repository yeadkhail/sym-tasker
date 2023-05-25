#include <iostream>
#include <fstream>
#include <string>
#include "header.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;
void appendLine(std::ofstream& outputFile, const std::string& line,const std::string& line2) {
    std::string concat = line + "~" + line2 + "~";
    outputFile << concat << std::endl;
}
int finalFileChangerForOutputTable()
{


std::ifstream file1("d1.txt");
    std::ifstream file2("d2.txt");
    std::ofstream outputFile("d5.txt");

    if (!file1.is_open()) {
        std::cout << "Unable to open d1.txt" << std::endl;
        return 1;
    }

    if (!file2.is_open()) {
        std::cout << "Unable to open d2.txt" << std::endl;
        return 1;
    }

    if (!outputFile.is_open()) {
        std::cout << "Unable to open d5.txt" << std::endl;
        return 1;
    }

    std::string line1, line2;

  while (true) {
     string one,two;

    if (std::getline(file1, line1)) {
        // Read a line from file4
        if (std::getline(file2, line2)) {
            // Append the lines to outputFile2
            appendLine(outputFile, line1, line2);
        } else {
            // Reached the end of file4, exit the loop
            break;
        }
    } else {
        // Reached the end of file3, exit the loop
        break;
    }
}

    while (std::getline(file1, line1)) {
        appendLine(outputFile, line1,"  ");
    }

    while (std::getline(file2, line2)) {
        appendLine(outputFile, line2,"  ");
    }

    file1.close();
    file2.close();
    outputFile.close();


    std::ifstream file3("d3.txt");
    std::ifstream file4("d4.txt");
    std::ofstream outputFile2("d6.txt");

    if (!file3.is_open()) {
        std::cout << "Unable to open d3.txt" << std::endl;
        return 1;
    }

    if (!file4.is_open()) {
        std::cout << "Unable to open d4.txt" << std::endl;
        return 1;
    }

    if (!outputFile2.is_open()) {
        std::cout << "Unable to open d6.txt" << std::endl;
        return 1;
    }

    std::string line3, line4;

    while (true) {
     string one,two;

    if (std::getline(file4, line4)) {
        // Read a line from file4
        if (std::getline(file4, line4)) {
            // Append the lines to outputFile2
            appendLine(outputFile2, line3, line4);
        } else {
            // Reached the end of file4, exit the loop
            break;
        }
    } else {
        // Reached the end of file3, exit the loop
        break;
    }
}

    while (std::getline(file3, line3)) {
        appendLine(outputFile2, line3,"  ");
    }

    while (std::getline(file4, line4)) {
        appendLine(outputFile2, line4,"  ");
    }

    file3.close();
    file4.close();
    outputFile2.close();

return 0;
}
