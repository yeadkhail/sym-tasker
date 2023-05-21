#include <bits/stdc++.h>
#include "header.h"

using namespace std;

int TagInsert(void){
    string filename = dotsymfilestring();
    string tag, imp;
    cout << "What tag do you want to insert?" << endl;
    getline(cin, tag);
    cout << "What shall be the importance? (1 for high and 0 for low)" << endl;
    getline(cin, imp);
    string dot = "^^";
    int i=0,num1,num2;
    string InsertedTag, Imp, input, part;
    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Error opening file: " << filename << endl;
        return 0;
    }

    vector<string> lines;
    string line;
    while (getline(inputFile, line)) {
        lines.push_back(line);
        i++;
        if(line == "``input``"){
            num2 = i;
        }
        if(line == "``tags``"){
            num1 = i;
        }
    }
    inputFile.close();
    cout << num2 - num1 << endl;
    char x[1000];
    int number = num2 - num1 - 1;
    snprintf(x, sizeof(x), "%d", number);
    string insert = x + dot + tag + dot + imp;
    lines.insert(lines.begin() + (num2-2), insert);
    cout << x << endl;
    ofstream outputFile(filename);
    if (!outputFile){
        cout << "Error creating file: " << filename << endl;
        return 0;
    }

    for (const string& outputLine : lines) {
        outputFile << outputLine << endl;
    }
    outputFile.close();

    cout << "Line inserted successfully!" << endl;

    return 0;
}
