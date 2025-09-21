/*
Aparna Harry
Sep 21, 2025
lab 7, branching mechanism using switch-case statement
*/
#include<iostream>
#include<string>

using namespace std;

int main() {
    // declare the variable integer and character for a number and operation
    int FirstNumber, SecondNumber;
    char operate;    
    // Step 1: Prompt the first number from the user
    cout << "Enter the first number: ";
    cin >> FirstNumber;
    // Step 2: Prompt the second number from the user
    cout << "Enter the second number: ";
    cin >> SecondNumber;
    // Step 3: Ask the user to choose operation to perform
    // characters addition, subtraction, multiplication, division and modulus
    // Also option q for quit
    cout << "Choose an operation (+,-,*,/,%,q to quit):* ";
    cin >> operate;
    // If the user enters 'q' or 'Q', quit program
    // if statement and OR logical operator for q or Q
    // return 0; to end program if user wants to quit
    if (operate == 'q' || operate == 'Q') {
        cout << "Quitting the program." << endl;
        return 0;
    }

    // Step 4: Use switch-case to perform the operation using assignment operators
    switch (operate) {
        case '+':
            // addition; add FirstNumber and SecondNumber
            cout << "Result: " << FirstNumber << " + " << SecondNumber << " = " << (FirstNumber + SecondNumber) << endl;
            break;
        case '-':
            // subtraction; subtract SecondNumber from FirstNumber
            cout << "Result: " << FirstNumber << " - " << SecondNumber << " = " << (FirstNumber - SecondNumber) << endl;
            break;
        case '*':
            // multiplication; multiply values of FirstNumber and SecondNumber
            cout << "Result: " << FirstNumber << " * " << SecondNumber << " = " << (FirstNumber * SecondNumber) << endl;
            break;
        case '/':
            // division; divide FirstNumber by SecondNumber
            // check if SecondNumber is not zero using NOT logical operator
            // only perform division if SecondNumber is not zero; otherwise, print error message
            if (SecondNumber != 0)
                cout << "Result: " << FirstNumber << " / " << SecondNumber << " = " << (FirstNumber / SecondNumber) << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        case 'q': case 'Q':
            // q or Q: to quit program
            cout << "Quitting the program." << endl;
            break;
        case '%':
            // modulus; return the division remainder of FirstNumber divided by SecondNumber
            // only perform division if SecondNumber is not zero; otherwise, print error message

            if (SecondNumber != 0)
                cout << "Result: " << FirstNumber << " % " << SecondNumber << " = " << (FirstNumber % SecondNumber) << endl;
            else
                cout << "Error: Modulus by zero is not allowed." << endl;
            break;
        default:
            // Handle invalid operation input
            cout << "Error: Invalid operation selected. Only (+, -, *, /, %, q) allowed." << endl;
    }

    //end program
    return 0;
}
