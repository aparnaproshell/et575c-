/*
Aparna Harry
Nov 24, 2025
lab 19, files and console input
*/

#include<iostream>
#include<fstream>
#include "lab19_function_Harry.cpp"

using namespace std;

int main() {
    cout<<"\n------ Example 1: console input failure -----"<<endl;
    checknumber();
    cout<<"\n------ Example 2: console input failure in loop -----"<<endl;
    cout<<"validated number = "<<validatenumber()<<endl;

    cout<<"\n------ Example 3: reading a file -----"<<endl;
    readfile("samplefile.txt");

    cout<<"\n------ Example 4: writing content into a file -----"<<endl;
    writefile("outputfile.txt");

    cout<<"\n------ Example 5: append data into a file ----"<<endl;
    appendfile("samplefile.txt");

    cout<<"\n------ EXERCISE: create and view user file -----"<<endl;
    makeuserfile("data_user.txt");
    signalmessage("data_user.txt");
    viewuserfile("data_user.txt");
    return 0;
}