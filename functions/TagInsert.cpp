#include <bits/stdc++.h>
#include "header.h"

using namespace std;

int TagInsert(void){
    setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
    char *line1 = NULL;
    size_t len = 0;
    string filename = dotsymfilestring();
    string tag, imp;
    cout << "What tag do you want to insert?" << endl;
    getline(cin, tag);
    cout << "What shall be the importance? (1 for Important and 0 for Not important)" << endl;
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
    char x[1000];
    int number = num2 - num1 - 1;
    snprintf(x, sizeof(x), "%d", number);
    string insert = x + dot + tag + dot + imp;
    lines.insert(lines.begin() + (num2-2), insert);
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
