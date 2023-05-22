#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
void randomizer()
{
    setvbuf(stdin, NULL, _IONBF, 0);  // Disable input buffering
    char *line = NULL;
    size_t len = 0;
    string question;
    string ans;

    cout << "Enter Your Question: ";
    getline(cin, question);

    cout << "Press 'd' for default answers or press any key for your own answers: ";
    cin >> ans;

    if (ans == "d")
    {
        srand(time(NULL));
        while (true)
        {
            cout << question << endl;
            if (rand() % 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            char ch;
            cout << "Do you want to play again? (y/n) ";
            cin >> ch;
            if (ch == 'n')
            {
                break;
            }
            else if (ch != 'y')
            {
                cout << "Wrong input" << endl;
                break;
            }
        }
    }
    else
    {
        cin.ignore();
        string ans1, ans2;

        cout << "Input your first answer: ";
        getline(cin, ans1);

        cout << "Input your second answer: ";
        getline(cin, ans2);

        srand(time(NULL));
        while (true)
        {
            if (rand() % 2)
            {
                cout << ans1 << endl;
            }
            else
            {
                cout << ans2 << endl;
            }
            char ch;
            cout << "Do you want to play again? (y/n) ";
            cin >> ch;
            if (ch == 'n')
            {
                break;
            }
            else if (ch != 'y')
            {
                cout << "Wrong input" << endl;
                break;
            }
        }
    }
}