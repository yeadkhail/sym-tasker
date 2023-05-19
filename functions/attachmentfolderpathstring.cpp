#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

std::string attachmentfolderpathstring() {
    char* homeDir = getenv("HOME");

    // Check if the homeDir is not null
    if (homeDir == nullptr) {
        std::cout << "Error retrieving home directory." << std::endl;
        return ""; // Return an empty string to indicate the error
    }

    char folderPath[256];
    strcpy(folderPath, homeDir);
    strcat(folderPath, "/.sym/Attachments/");
    //cout<< folderPath << endl;

    std::string path = folderPath;
    return path;
}
