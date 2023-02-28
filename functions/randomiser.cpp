
#include<iostream>
#include<time.h>
using namespace std;
int randomizer()
{
    while(1)
    {
        cin.clear();
        cin.sync();
        string question;
        string ans;
        int seed;
        cout<<"Enter Your Question:";
        getline(cin,question);
        cout<<"Press 'd' for default answers or press any key for your own answers:"<<endl;
        cin>>ans;
        if (ans[0]=='d' && ans[1]=='\0')
        {
            srand(time(NULL));
            seed=rand();
            if(seed%2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            char ch;
            cout<<"Do you want to play again?y/n"<<endl;
            cin>>ch;
            if(ch=='y')
            {
                continue;
            }
            else if(ch=='n')
            {
                break;
            }
            else
            {
                cout<<"Wrong input"<<endl;
                break;
            }
        }
        else
        {
            cin.clear();
            cin.sync();
            string ans1,ans2;
            cout<<"Input your first answer"<<endl;
            getline(cin,ans1);
            cout<<"Input your second answer"<<endl;
            getline(cin,ans2);
            srand(time(NULL));
            seed=rand();
            if(seed%2)
            {
                cout<<ans1<<endl;
            }
            else
            {
                cout<<ans2<<endl;
            }
            char ch;
            cout<<"Do you want to play again?y/n"<<endl;
            cin>>ch;
            if(ch=='y')
            {
                continue;
            }
            else if(ch=='n')
            {
                break;
            }
            else
            {
                cout<<"Wrong input"<<endl;
                break;
            }
        }
    }
}
