//
// Created by yead on 3/1/23.
//
#include<iostream>
#include <fstream>
#include <cstdlib>
#include<cstring>
#include <sys/stat.h>
#include <sys/types.h>

int initializer()
{
    using namespace std;

    ofstream dotsym;
    char *homeDir = getenv("HOME");

    // Check if the homeDir is not null
    if (homeDir == nullptr) {
        cout << "Error retrieving home directory." << endl;
        return 1;
    }

    // Create a copy of homeDir
    char folderPath[256];
    strcpy(folderPath, homeDir);

    strcat(folderPath, "/.sym");
    int status = mkdir(folderPath, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    if (status != 0) {
        cout << "Error creating .sym folder." << endl;
    }

    strcat(folderPath, "/Attachments");
    //cout << folderPath << endl;
    status = mkdir(folderPath, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    if (status != 0) {
        cout << "Error creating attachment folder." << endl;
    }

    string Sym = "/.sym/.sym";
    //strcat(homeDir,Sym);
    //cout << homeDir << endl;
    dotsym.open(homeDir+Sym);
    if(!dotsym)
    {
        cout << "Error in creating .sym file" << endl << "Exiting the program"<<endl;
        exit(1);
    }
    string name,phone_number,address,email;
    cout<< "Enter your full name: ";
    getline(cin,name);
    //cout <<endl;
    cout << "Enter your phone number: ";
    getline(cin,phone_number);
    cout << "Enter your emaili address:";
    getline(cin,email);
    //cout<< endl;
    cout<< "Enter your address(In one line): ";
    getline(cin, address);
    //cout<< name << " " << phone_number << " " << address << endl;
    cout << "Hello " << name << "!"<< endl;
    system("sleep 2");
    cout<< "We are now going to initialize your profile!" <<endl;
    system("sleep 2");
    system("clear");
    dotsym <<"``Detais``"<<endl;
    dotsym <<"Name: "<<name<<endl;
    dotsym <<"Phone Number: " << phone_number << endl;
    dotsym << "Email: " << email << endl;
    dotsym << "Address: "<< address << endl;
    //dotsym << "$$Details$$"<<endl;
    dotsym << "\n";
    dotsym << "``tasks``"<<endl;
    dotsym << "\n";
    dotsym << "``tags``"<<endl;
    dotsym << "1^important^1"<<endl;
    dotsym << "2^not-important^0"<<endl;
    //dotsym << "$$tags$$"<<endl;
    dotsym << "\n";
    dotsym << "``input``\n";
    dotsym.close();
    return 0;
}
