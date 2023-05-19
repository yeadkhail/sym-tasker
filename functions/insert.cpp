//
// Created by yead on 3/4/23.
//

#include<functions/input.h>
#include "header.h"

void insert(void)
{
    ofstream dotsym;
    string filename = dotsymfilestring();
    dotsym.open(filename,ios::app);
    if(!dotsym)
    {
        cout << "Error in creating .sym file" << endl << "Exiting the program"<<endl;
        exit(1);
    }
    getc(stdin);
    input taskdata;
    taskdata = insertaskdata();
    // here line number needs to be included (has to implement afterwards).
    dotsym << "^^"<<taskdata.taskname<<"^^"<<taskdata.taskdetail<<"^^"<<taskdata.tasktag<<"^^"<<taskdata.date<<"^^"
            <<taskdata.attachment<<"^^"<<endl;
    dotsym.close();

}
