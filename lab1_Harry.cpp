/*
Aparna Harry
Aug 27, 2025
Lab 1, iostream
*/
#include <iostream>
using namespace std;

int main() 
{
    cout << "------ Example 1: cout data ------"<<endl;
    cout <<"This is a C++ code"<<endl;
    // variables = temporary storage of data
    // declare the variable first
    string username = "peterpan123";
    cout<<"\nWelcome to C++ \t\t"<<username<<endl;
    
    cout << "------ Example 2: cin data ------"<<endl;
    cout<<"Enter a new username "<<endl;
    cin >> username;
    cout<<"New user is "<<username<<endl;

    cout << "------ Example 3: data type ------"<<endl;
    // declare variable
    char sym = '%';
    float distance = 5.63;
    int number = 8.9;

    cout<<"Given symbol = "<<sym<<endl;
    cout<<"Given distance = "<<distance<<endl;
    cout<<"Given number = "<<number<<endl;

    cout<<"------ EXERCISE------"<<endl;
    // declare variables
    string gender = "M/F";
    cout<<"Enter a gender "<<endl;
    cin>> gender;

    return 0;
}