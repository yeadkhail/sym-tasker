#include <functions/input.h>
#include <vector>
#include "header.h"

using namespace std;

int insert(void)
{

    string filename = dotsymfilestring();
    ifstream read;
    read.open(filename);
    if (!read)
    {
        cout << "Error while opening file" << endl;
        exit(1);
    }
    int num1,num2,i=0;
    vector<string> lines;
    string line;
    while(getline(read, line)){
        lines.push_back(line);
        i++;
        if(line == "``tags``"){
            num2 = i;
        }
        if(line == "``tasks``"){
            num1 = i;
        }
    }
    read.close();
    char c[1000];
    int number = num2 - num1 - 1;
    snprintf(c, sizeof(c), "%d", number);

    input taskdata;
    taskdata = insertaskdata();

    string tname = taskdata.taskname;
    string tdetail = taskdata.taskdetail;
    string ttag = taskdata.tasktag;
    string tdate = taskdata.date;
    string dot = "^^";
    string insert = c + dot + tname + dot + tdetail + dot + ttag + dot + tdate;
    lines.insert(lines.begin() + (num2-2), insert);
    cout << c << endl;
    ofstream outputFile(filename);
    if (!outputFile){
        cout << "Error creating file: " << filename << endl;
        return 1;
    }

    for (const string& outputLine : lines) {
        outputFile << outputLine << endl;
    }
    outputFile.close();
    return 0;
}
