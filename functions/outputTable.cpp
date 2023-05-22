//
// Created by yead on 5/22/23.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int outputTable() {
    setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
    char *lsdf1 = NULL;
    size_t len = 0;
    ifstream fin, fin2a, fin2b, fin2c, fin3a, fin3b, fin3c,fin4;
    fin.open("data1.txt");
    if (!fin) {
        cout << "Error while opening file" << endl;
        exit(1);
    }

    string line;

    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close(); // Close data1.txt

    fin2a.open("data2.txt");
    fin2b.open("data6.txt");
    fin2c.open("data7.txt");

    if (!fin2a || !fin2b || !fin2c) {
        cout << "Error while opening file(s)" << endl;
        exit(1);
    }

    string line1, line2, line3;

    while (getline(fin2a, line1) && getline(fin2b, line2) && getline(fin2c, line3)) {
        cout << line1 << line2 << line3 << endl;
    }

    fin2a.close(); // Close data2.txt
    fin2b.close(); // Close data5.txt
    fin2c.close(); // Close data6.txt

    fin3a.open("data3.txt");
    fin3b.open("data8.txt");
    fin3c.open("data9.txt");

    if (!fin3a || !fin3b || !fin3c) {
        cout << "Error while opening file(s)" << endl;
        exit(1);
    }

    while (getline(fin3a, line1) && getline(fin3b, line2) && getline(fin3c, line3)) {
        cout << line1 << line2 << line3 << endl;
    }

    fin3a.close(); // Close data3.txt
    fin3b.close(); // Close data5.txt
    fin3c.close(); // Close data6.txt
    fin4.open("data4.txt");
    if (!fin4) {
        cout << "Error while opening file" << endl;
        exit(1);
    }

    while (getline(fin4, line)) {
        cout << line << endl;
    }

    fin4.close();
    return 0;
}