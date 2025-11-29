/*
Aparna Harry
Nov 28, 2025
Lab 19 - Function Definitions for File Operations
This file contains the function definitions for file operations.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to create a file and write initial message
void createFile() {
    // Open file in output mode to create/overwrite
    ofstream outFile;
    outFile.open("data_user.txt");
    
    // Check if file opened successfully
    if (!outFile) {
        cout << "Error: Unable to create file." << endl;
        return;
    }
    
    // Write the required message to the file
    outFile << "This is my output file – Aparna Harry.\n";
    
    // Close the file
    outFile.close();
    
    cout << "File 'data_user.txt' created successfully with initial message." << endl;
}

// Function to append a new message to the file
void appendToFile(string message) {
    // Open file in append mode to add content at the end
    ofstream outFile;
    outFile.open("data_user.txt", ios::app);
    
    // Check if file opened successfully
    if (!outFile) {
        cout << "Error: Unable to open file for appending." << endl;
        return;
    }
    
    // Append the message passed as argument
    outFile << message << endl;
    
    // Close the file
    outFile.close();
    
    cout << "Message appended to 'data_user.txt' successfully." << endl;
}

// Function to read and display contents of a file
void readFile(string filename) {
    // Open file in input mode for reading
    ifstream inFile;
    inFile.open(filename);
    
    // Check if file opened successfully
    if (!inFile) {
        cout << "Error: Unable to open file '" << filename << "' for reading." << endl;
        return;
    }
    
    cout << "\n----- Contents of '" << filename << "' -----" << endl;
    
    // Read and display file line by line
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    
    // Close the file
    inFile.close();
    
    cout << "----- End of file -----\n" << endl;
}
