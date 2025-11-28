/*
Aparna Harry
Nov 28, 2025
Lab 18: Function Definitions for 1D Arrays
This file contains the implementation of functions used in lab18_Harry.cpp
*/

#include <iostream>
#include <cmath>  // for abs() function
using namespace std;

// Function to collect non-zero integers from user
// Parameters: arr[] - array to store the numbers
// Returns: number of integers collected (0-5)
int collectnumber(int arr[]) {
    int count = 0; // Counter for number of entries
    int input = 0; // Variable to store user input
    
    cout << "Enter up to 5 non-zero integers (enter 0 to stop):" << endl;
    
    // Loop to collect up to 5 numbers
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> input;
        
        // Check if user entered sentinel value (0)
        if (input == 0) {
            cout << "Sentinel value (0) entered. Stopping input." << endl;
            break; // Exit loop when 0 is entered
        }
        
        // Store the non-zero number in the array
        arr[count] = input;
        count++; // Increment the counter
    }
    
    cout << "\nTotal numbers entered: " << count << endl;
    return count; // Return how many numbers were collected
}

// Function to calculate average of numbers in array
// Parameters: arr[] - array containing the numbers
//            count - number of elements in the array
// Returns: average as a double
double Averagenumber(int arr[], int count) {
    int sum = 0; // Variable to accumulate the sum
    
    // Loop through array and add each number to sum
    for (int i = 0; i < count; i++) {
        sum += arr[i]; // Add current element to sum
    }
    
    // Calculate average by dividing sum by count
    // Cast to double to get decimal result
    double average = static_cast<double>(sum) / count;
    
    return average; // Return the calculated average
}

// Function to find the number closest to the average
// Parameters: arr[] - array containing the numbers
//            count - number of elements in the array
//            avg - the calculated average
// Returns: the number from array closest to average
// Note: The closest number CAN be equal to the average!
//       Example: If array is [10, 20, 30, 40, 50], average = 30
//       The number 30 has distance of 0 from average, making it the closest.
//       This is mathematically correct since |30 - 30| = 0.
int Closestmean(int arr[], int count, double avg) {
    int closest = arr[0]; // Initialize with first element
    double minDifference = abs(arr[0] - avg); // Calculate initial difference using absolute value
    
    // Loop through array to find closest number by comparing distances
    // We use absolute value to measure distance regardless of whether
    // the number is above or below the average
    for (int i = 1; i < count; i++) {
        // Calculate absolute difference between current number and average
        // Example: if avg = 30 and arr[i] = 20, difference = |20 - 30| = 10
        //          if avg = 30 and arr[i] = 30, difference = |30 - 30| = 0 (closest possible!)
        double currentDifference = abs(arr[i] - avg);
        
        // Check if this number is closer to average than previous closest
        // Smaller difference means closer to the average
        if (currentDifference < minDifference) {
            minDifference = currentDifference; // Update minimum difference
            closest = arr[i]; // Update closest number
        }
    }
    
    return closest; // Return the number closest to average
}

// Function to display the results
// Parameters: avg - the calculated average
//            closest - the number closest to the average
// Returns: void (no return value)
void Printresult(double avg, int closest) {
    cout << "\n ----- Results -----" << endl;
    cout << "The closest number to average " << avg 
         << " is " << closest << "." << endl;
}
