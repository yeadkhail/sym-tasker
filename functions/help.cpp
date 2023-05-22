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
    cout<<"sym --randomizer: Allows the user to play a randomizer game\n\n";
    cout << "Available commands:\n";
    cout << "insert: Insert a task\n";
    cout << "delete: Delete a task\n";
    cout << "update: Update a task\n";
    cout << "show: Show all tasks\n";
    cout << "help: Show this help\n";
    cout << "version: Show version\n";
    cout << "randomizer: Play a randomizer game\n";
    cout << "insert-tag: Insert a tag\n";
    cout << "edit-tag: Edit a tag\n";
    cout << "delete-tag: Delete a tag\n";
    cout << "search-tagwise: Search tagwise\n";
    cout << "exit: Exit\n";
    cout << "clear: Clear screen\n";
    cout << "history: Show history\n";

   // return 0;
}
