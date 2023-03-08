#include<iostream>
#include<stdio.h>
using namespace std;
void help(void){
    cout<<"sym --history(command: history): See history of tasks to edit\n";
    cout<<"sym --insert(command: insert): Add a task(In the format -n \"task name \" -d \"task detail\" -t \"tag\" -d \"date\"\n";
    cout<<"sym --edit <input_number>(command edit): Edit a task from the history list.\n";
    cout<<"sym --delete <input_number>(command: delete): Delete a task from the history list.\n";
    cout<<"sym --tagwise(command: tagwise): Shows the list of unfinished task sorted by their tags\n";
    cout<<"sym --note: Allows the user to put a note on that task\n";
    cout<<"sym --version: Shows the version of the application\n";
    cout<<"sym --randomizer: Allows the user to play a randomizer game\n";
   // return 0;
}
