#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int outputTable()
    {
        cout << string(86, '=') << endl;
        string line;
        cout << setw(20) << " " << "||" << left << setw(30) << "   URGENT" << "||" << left << setw(30)
             << "    NOT URGENT" << "||" << endl;
        cout << string(86, '=') << endl;

        ifstream fin, fin2;
        fin.open("d5.txt");

        if (!fin) {
            cout << "Error while opening file" << endl;
        }
        cout << setw(20) << left << "Important" << "||" << setw(30) << " " << "||" << setw(30) << " " << "||" << endl;
        string line1 = "";
        string space = "                    ";

        while (!fin.eof()) {
            setvbuf(stdin, NULL, _IONBF, 0);
            getline(fin, line1);
            istringstream iss1(line1);
            string urg;
            string nurg;
            getline(iss1, urg, '~');
            getline(iss1, nurg, '~');
            cout << setw(20) << space << "||" << setw(30) << left << urg << "||" << setw(30) << nurg << left << "||"
                 << endl;

        }
        cout << string(86, '=') << endl;

        cout << setw(20) << left << "Not Important" << "||" << setw(30) << " " << "||" << setw(30) << " " << "||"
             << endl;
        fin2.open("d6.txt");
        string line2 = "";
        string space2 = "                    ";

        while (!fin2.eof()) {
            setvbuf(stdin, NULL, _IONBF, 0);
            getline(fin2, line2);
            istringstream iss2(line2);
            string urg;
            string nurg;
            getline(iss2, urg, '~');
            getline(iss2, nurg, '~');
            cout << setw(20) << space2 << "||" << setw(30) << left << urg << "||" << setw(30) << nurg << left << "||"
                 << endl;

        }
        cout << string(86, '=') << endl;
        fin.close();
        return 0;
    }
