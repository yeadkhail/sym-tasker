//
// Created by yead on 3/4/23.
//

#include<functions/input.h>

void inset(void)
{
    ofstream dotsym;
    string homeDir = getenv("HOME");
    string Sym = "/.sym";
    dotsym.open(homeDir+Sym);
    if(!dotsym)
    {
        cout << "Error in creating .sym file" << endl << "Exiting the program"<<endl;
        exit(1);
    }
    input taskdata;
    taskdata = insertaskdata();


}
