//
// Created by yead on 5/19/23.
//

#include <iostream>
#include <fstream>
#include "header.h"
using namespace std;
string getFileName(const string& filePath) {
    size_t lastSeparatorPos = filePath.find_last_of("/\\");
    string fileName = filePath.substr(lastSeparatorPos + 1);
    return fileName;
}
bool copyFile(const string& sourceFilePath, const string& destinationFolderPath)
{
    ifstream sourceFile(sourceFilePath, ios::binary);
    if (!sourceFile) {
        cerr << "Failed to open source file." << endl;
        return false;
    }
    string destinationFilePath = destinationFolderPath + getFileName(sourceFilePath);
    //cout << getFileName(sourceFilePath) << endl;
    //cout<< destinationFilePath << endl;
    ofstream destinationFile(destinationFilePath, ios::binary);
    if (!destinationFile) {
        cerr << "Failed to create destination file." << std::endl;
        sourceFile.close();
        return false;
    }
    destinationFile << sourceFile.rdbuf();
    sourceFile.close();
    destinationFile.close();

    return true;
}
