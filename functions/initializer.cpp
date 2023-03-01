//
// Created by yead on 3/1/23.
//
#include<iostream>
#include <fstream>
#include <cstdlib>
#include<cstring>

int initializer()
{
    using namespace std;
    ofstream dotsym;
    string homeDir = getenv("HOME");
    string Sym = "/.sym";
    //strcat(homeDir,Sym);
    cout << homeDir << endl;
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
    cout<< "We are now going to initialize your profile!" <<endl;
    dotsym <<"``Detais``"<<endl;
    dotsym <<"Name: "<<name<<endl;
    dotsym <<"Phone Number: " << phone_number << endl;
    dotsym << "Email: " << email << endl;
    dotsym << "Address: "<< address << endl;
    dotsym << "\n\n\n***\n";
    dotsym << "``tags``"<<endl;
    dotsym << "\n\n\n***\n";
    dotsym << "``input``\n\n\n***\n";
    dotsym.close();
    return 0;
}
