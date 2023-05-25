#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int fileChangerForOutputTable() {
    ifstream inputFile("data1.txt");

    if (!inputFile) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    ofstream outputFile("d1.txt");

    if (!outputFile) {
        cout << "Failed to create the output file." << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        if (line.length() > 30) {
            string firstPart = line.substr(0, 29);
            string secondPart = line.substr(29);
            outputFile << firstPart <<'-'<< endl << secondPart<<endl;
        } else {
            if(line.length()==1)
                outputFile << line << " "<<endl;
            else
            {
                outputFile << line<<endl;
            }
        }

    }
    inputFile.close();
    outputFile.close();

    ifstream inputFile2("data2.txt");

    if (!inputFile2) {
        std::cout << "Failed to open the file." << endl;
        return 1;
    }

    ofstream outputFile2("d2.txt");

    if (!outputFile2) {
        cout << "Failed to create the output file." << std::endl;
        return 1;
    }


    while (getline(inputFile2, line)) {
        if (line.length() > 30) {
            string firstPart = line.substr(0, 29);
            string secondPart = line.substr(29);
            outputFile2 << firstPart << endl << secondPart <<endl;
        } else {
            if(line.length()==1)
                outputFile2 << line << " "<<endl;
            else
            {
                outputFile2<< line<<endl;
            }
        }
    }



    inputFile2.close();
    outputFile2.close();

    ifstream inputFile3("data3.txt");

    if (!inputFile3) {
        cout<< "Failed to open the file." << endl;
        return 1;
    }

    ofstream outputFile3("d3.txt");

    if (!outputFile3) {
        cerr << "Failed to create the output file." << endl;
        return 1;
    }


    while (getline(inputFile3, line)) {
        if (line.length() > 30) {
            string firstPart = line.substr(0, 29);
            string secondPart = line.substr(29);
            outputFile3 << firstPart <<"-"<< endl << secondPart << " "<<endl;
        } else {
            if(line.length()==1)
                outputFile3 << line << " "<<endl;
            else
            {
                outputFile3<< line<<endl;
            }
        }
    }
//  outputFile3<<space<<endl;
//     outputFile3<<space<<endl;
    inputFile3.close();
    outputFile3.close();

    ifstream inputFile4("data4.txt");

    if (!inputFile4) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    ofstream outputFile4("d4.txt");

    if (!outputFile4) {
        cerr << "Failed to create the output file." << endl;
        return 1;
    }


    while (getline(inputFile4, line)) {
        if (line.length() > 30) {
            string firstPart = line.substr(0, 29);
            string secondPart = line.substr(29);
            outputFile4 << firstPart <<'-'<< endl << secondPart << " "<<endl;
        } else {
            if(line.length()==1)
                outputFile4 << line << " "<<endl;
            else
            {
                outputFile4<< line<<endl;
            }
        }
    }
//  outputFile4<<space<<endl;
//     outputFile4<<space<<endl;
    inputFile4.close();
    outputFile4.close();

    return 0;
}
