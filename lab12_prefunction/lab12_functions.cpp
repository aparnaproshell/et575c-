/*
Aparna Harry
Oct 24, 2025
lab 12: scoping, and predefined functions
*/

#include<iostream>
#include<cmath>
using namespace std;

// example 1: function that calculates and returns the sum of two numbers
int add(int num1, int num2){
    int sum = num1 + num2; // sum is a local variable in function add()
    cout<<"the sum in function add() is \t"<<sum<<endl;
    return sum;

}

// example 3: c++ predefine functions
// function passes two arguments, calculates and returns the hypotenuse of a right triangle.
float hyp(float side1, float side2){
    return sqrt((pow(side1, 2))+(pow(side2, 2)));
}

// function to print result
void printhyp(float s1, float s2, float h){
    cout<<"The hypotenuse of side "<<s1<<" and "<<s2<<" is "<<h<<endl;
}

// ===== EXERCISE: THREE FUNCTION DISTANCE CALCULATOR =====

// FUNCTION 1: Input validation function to collect positive integers only
// This function ensures user enters valid coordinate values (greater than 0)
// Returns: int - a valid positive integer for coordinate values
// Parameters: none (void function for user input)
int takezero_()
{
    // Declare variable to store user input number
    int number_thanzero;
    
    // Infinite loop to keep asking for input until valid number is entered
    // This demonstrates input validation using a while loop with break condition
    while (true) {
        // Display prompt asking user for a positive number
        cout << "Enter a number greater than 0: ";
        
        // Read integer input from user and store in variable
        cin >> number_thanzero;
        
        // Validate input: check if number is less than or equal to 0 (invalid)
        if (number_thanzero <= 0) 
        {
            // Display error message explaining why input is invalid
            cout << "Number must be greater than 0, enter new number: " << endl;
            
            // Continue statement skips rest of loop and goes back to while condition
            // This forces the user to enter input again without exiting the function
            continue;
        }
        
        // If we reach this point, the number is valid (greater than 0)
        // Return the valid number and exit the function
        return number_thanzero;
    }
}

// FUNCTION 2: Distance calculation function using Euclidean distance formula
// This function calculates the straight-line distance between two points in 2D space
// Uses the mathematical formula: distance = √((x₂-x₁)² + (y₂-y₁)²)
// Returns: float - the calculated distance between two points
// Parameters: int x1, y1 (first point coordinates), int x2, y2 (second point coordinates)
float calcdist(int x1, int y1, int x2, int y2)
{
    // Calculate distance using Euclidean distance formula
    // pow(x2 - x1, 2) calculates the square of the difference in x-coordinates
    // pow(y2 - y1, 2) calculates the square of the difference in y-coordinates  
    // sqrt() calculates the square root of the sum to get final distance
    // This is a single return statement that performs the entire calculation
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// FUNCTION 3: Output formatting function to display distance calculation results
// This function takes all coordinate values and the pre-calculated distance
// Formats and displays the result in a user-friendly format
// Returns: void (no return value - this is a display function)
// Parameters: int x1, y1, x2, y2 (coordinate values), float d (calculated distance)
void printczo(int x1, int y1, int x2, int y2, float d)
{
    // Display formatted output showing both coordinate points and calculated distance
    // Uses coordinate notation (x, y) to clearly show the two points
    // Includes descriptive text to make the output self-explanatory
    cout << "The distance of points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << d << endl;
}
