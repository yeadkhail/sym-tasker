//
// Created by yead on 3/4/23.
//

#include<functions/input.h>

void insert(void)
{
    ofstream dotsym;
    string homeDir = getenv("HOME");
    string Sym = "/.sym";
    dotsym.open(homeDir+Sym,ios::app);
    if(!dotsym)
    {
        cout << "Error in creating .sym file" << endl << "Exiting the program"<<endl;
        exit(1);
    }
    getc(stdin);
    input taskdata;
    taskdata = insertaskdata();
    // here line number needs to be included (has to implement afterwards).
    dotsym << "^^"<<taskdata.taskname<<"^^"<<taskdata.taskdetail<<"^^"<<taskdata.tasktag<<"^^"<<taskdata.date<<endl;
    dotsym.close();

}
