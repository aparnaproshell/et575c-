/*
Aparna Harry
Oct 24, 2025
lab 12: scoping, and predefined functions
*/

#include<iostream>
using namespace std;
// example 2 global variable
int num = 8;


void doSomething(){
    // global variable
    num = -20;
    cout<<"num in doSomething function: "<<num<<endl;
}

#include "lab12_functions.cpp"

int main(){
    cout<<"\n------- example 1: local variables ------"<<endl;
    int sum = add(3,7) + add(1,6); // sum is local variable in the main() function
    cout<<"The total sum in main() is \t"<<sum<<endl;

    cout<<"\n------- example 2: global variables ------"<<endl;
    cout<<"num original value = \t"<<num<<endl;
    doSomething();
    num = 5;
    cout<<"num in main function = \t"<<num<<endl;

    cout<<"\n------- example 3: hypotenuse ------"<<endl;
    float s1 = 2;
    float s2 = 3;
    float h = hyp(s1, s2);
    printhyp(s1, s2, h);

    // ===== EXERCISE: COORDINATE DISTANCE CALCULATOR USING THREE FUNCTIONS =====
    cout<<"\n------- EXERCISE ------"<<endl;
    
    // STEP 1: Collect coordinate values for first point (x1, y1)
    // Call takezero_() function to get x-coordinate of first point
    // This function ensures user enters a positive integer with input validation
    int x1 = takezero_(); // call 1st function - get x-coordinate of point 1
    
    // Call takezero_() function again to get y-coordinate of first point  
    // Each call is independent and validates the input separately
    int y1 = takezero_(); // call 1st function - get y-coordinate of point 1
    
    // STEP 2: Collect coordinate values for second point (x2, y2)
    // Call takezero_() function to get x-coordinate of second point
    // This demonstrates function reusability - same function called multiple times
    int x2 = takezero_(); // call 1st function - get x-coordinate of point 2
    
    // Call takezero_() function to get y-coordinate of second point
    // All four coordinates are now collected and validated as positive integers
    int y2 = takezero_(); // call 1st function - get y-coordinate of point 2

    // STEP 3: Calculate distance between the two points using coordinates
    // Call calcdist() function with all four coordinate parameters (x1,y1,x2,y2)
    // This function applies Euclidean distance formula and returns float result
    // Store the calculated distance in variable 'd' for later use
    float d = calcdist(x1, y1, x2, y2); // call 2nd function - calculate distance

    // STEP 4: Display the results in formatted output
    // Call printczo() function with coordinate values and pre-calculated distance
    // This function formats and displays the complete calculation results
    // Demonstrates separation of concerns: calculation vs. display functions
    printczo(x1, y1, x2, y2, d); // call 3rd function - display formatted results

    return 0;

}