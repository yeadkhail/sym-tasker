#include<iostream>
#include<stdio.h>
using namespace std;
void help(void){
    cout<<"sym --history(command: history): See history of tasks to edit\n";
    cout<<"sym --version: Shows the version of the application\n";
    cout<<"sym --randomizer: Allows the user to play a randomizer game\n\n";
    cout << "Available commands:\n";
    cout << "insert: Insert a task\n";
    cout << "delete-task: Delete a task\n";
    cout << "update-task: Update a task\n";
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
    cout << "show-attachment: Show attachment\n";
    cout << "show-expired: Show expired tasks\n";
    cout << "show-table : Show the table again\n";


   // return 0;
}
