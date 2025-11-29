/*
Aparna Harry
Nov 28, 2025
Lab 19 - Main Program for File Operations
This program demonstrates three file operation functions.
Function definitions are in lab19_function.cpp
*/

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void createFile();                    // Creates file and writes initial message
void appendToFile(string message);    // Appends message to file
void readFile(string filename);       // Reads and displays file contents

int main() {
    cout << "\n***** Lab 19 - File Operations with Functions *****\n" << endl;
    
    // Example 1: Create the file with initial message
    cout << "----- Example 1: Creating File -----" << endl;
    createFile();
    
    // Example 2: Append messages to the file
    cout << "\n----- Example 2: Appending Messages -----" << endl;
    appendToFile("This is my first appended message.");
    appendToFile("This is my second appended message.");
    appendToFile("Learning file operations in C++!");
    
    // Example 3: Read and display file contents
    cout << "\n----- Example 3: Reading File -----" << endl;
    readFile("data_user.txt");
    
    // Example 4: Append one more message and read again
    cout << "\n----- Example 4: Append and Read Again -----" << endl;
    appendToFile("Final message added to the file.");
    readFile("data_user.txt");
    
    cout << "***** Program completed successfully *****" << endl;
    
    return 0;
}
