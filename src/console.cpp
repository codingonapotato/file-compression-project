#include "../include/console.h"
#include <iostream>
#include <string>
using namespace std;

void Console::init() {
    string input;
    cout << "Please input your name: " << endl;
    getline(cin, input);
    cout << "Hi there: " << input << " thank you for using this service today!" << endl;
    cout << "Task Successfully completed :D" << endl;
    cerr << "This is an error message" << endl;
    clog << "This is a logged messsage" << endl;
}