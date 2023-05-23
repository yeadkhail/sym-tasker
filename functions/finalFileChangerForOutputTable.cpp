//
// Created by yead on 5/23/23.
//
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
int finalFileChangerForOutputTable()
{
    ifstream file1("d1.txt");
    ifstream file2("d2.txt");
    ofstream outputFile("d5.txt");

    if (!file1.is_open())
    {
        cout << "Unable to open d1.txt" << endl;
        return 1;
    }

    if (!file2.is_open())
    {
        cout << "Unable to open d2.txt" << endl;
        return 1;
    }

    if (!outputFile.is_open())
    {
        cout << "Unable to open d5.txt" << endl;
        return 1;
    }

    string line1, line2;
    while (getline(file1, line1) && getline(file2, line2))
    {

        string concat = "";


        for (int i = 0; i < line1.length() - 1; i++)
        {
            concat += line1[i];
        }
        concat += " ~";

        for (int i = 0; i < line2.length() - 1; i++)
        {
            concat += line2[i];
        }
        concat += " ~";
        outputFile << concat << endl;

    }

    while (getline(file1, line1))
    {
        string concat = "";


        for (int i = 0; i < line1.length() - 1; i++)
        {
            concat += line1[i];
        }
        concat += " ~";

        for (int i = 0; i < line1.length() - 1; i++)
        {
            concat += " ";
        }
        concat += " ~";
        outputFile << concat << endl;

    }

    while (getline(file2, line2))
    {

        string concat = "";
        for (int i = 0; i < line2.length() - 1; i++)
        {
            concat += " ";
        }
        concat += " ~";
        for (int i = 0; i < line2.length() - 1; i++)
        {
            concat += line2[i];
        }
        concat += " ~";
        outputFile << concat << endl;

    }
    file1.close();
    file2.close();
    outputFile.close();

    ifstream file3("d3.txt");
    ifstream file4("d4.txt");
    ofstream outputFile2("d6.txt");

    if (!file3.is_open())
    {
        cout << "Unable to open d3.txt" << endl;
        return 1;
    }

    if (!file4.is_open())
    {
        cout << "Unable to open d4.txt" << endl;
        return 1;
    }

    if (!outputFile2.is_open())
    {
        cout << "Unable to open d6.txt" << endl;
        return 1;
    }

    string line3, line4;

    while (getline(file3, line3) && getline(file4, line4))
    {
        string concat = "";
        for (int i = 0; i < line3.length(); i++)
        {
            concat += line3[i];
        }
        concat += '~';
        for (int i = 0; i < line4.length(); i++)
        {
            concat += line4[i];
        }
        concat += '~';
        outputFile2 << concat << endl;
    }
    while (getline(file3, line3))
    {
        int length1 = line3.length();
        string concat = "";

        for (int i = 0; i < line3.length() - 1; i++)
        {
            concat += line3[i];
        }
        concat += '~';
        for (int i = 0; i < line3.length() - 1; i++)
        {
            concat += " ";
        }
        concat += '~';
        outputFile2 << concat << endl;
    }

    while (getline(file4, line4))
    {
        int length1 = line4.length();
        string concat = "";
        for (int i = 0; i < line4.length(); i++)
        {
            concat += " ";
        }
        concat += '~';
        for (int i = 0; i < line4.length(); i++)
        {
            concat += line4[i];
        }
        concat += '~';
        outputFile2 << concat << endl;
    }

    file3.close();
    file4.close();
    outputFile2.close();

    return 0;
}
