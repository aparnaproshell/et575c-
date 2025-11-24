/*
Aparna Harry
November 23, 2025
Homework 7: iterating loop and locating specific values
*/

#include <iostream> 
#include <cstdlib> 
#include <time.h> 
using namespace std; 

//function to collect the size of an array 
int collect_size(){  
    int size;
    // Prompt user to enter the array size
    cout << "Enter the size of the array: ";
    cin >> size;
    
    // Input validation: check if size is positive
    if (size <= 0) {
        cout << "Invalid size. Setting to 1." << endl;
        size = 1;
    }
    
    return size; // Return the size to main function
} 
 
//function to populate an array 
void populate_numbers(int ar[], int s){ 
    // use loop to RANDOMLY generates number between 1 and 99 
    for (int i = 0; i < s; i++) {
        // Generate random number between 1 and 99
        ar[i] = rand() % 99 + 1;
    }
} 
 
//function to print all numbers in an array 
void print_numbers(int ar[], int s){ 
    // use loop to print all numbers in an array 
    cout << "\nArray elements: ";
    for (int i = 0; i < s; i++) {
        // Print each element with space separator
        cout << ar[i] << " ";
    }
    cout << endl; // New line after printing all elements
} 
 
//function to find the minimum number in an array 
int array_min(int ar[], int s) { 
    // Assume first element is the minimum
    int min = ar[0];
    
    // Loop through array starting from second element
    for (int i = 1; i < s; i++) {
        // Compare current element with current minimum
        if (ar[i] < min) {
            // Update min if current element is smaller
            min = ar[i];
        }
    }
    
    return min; // Return the minimum value found
} 
 
//function to return the average of all numbers in an array 
float array_avg(int ar[], int s) { 
    // Initialize sum to accumulate all array values
    int sum = 0;
    
    // Loop through all elements in the array
    for (int i = 0; i < s; i++) {
        // Add each element to the sum
        sum += ar[i];
    }
    
    // Calculate average by dividing sum by size
    // Cast to float for decimal precision
    float average = (float)sum / s;
    
    return average; // Return the calculated average
} 
 
 
int main() { 
    srand(time(0)); // Seed random number generator with current time
    
    // declare variable num to save the size of an array 
    int num;
    
    // Call function to collect array size from user
    num = collect_size();
    
    // declare an array with size num 
    int a[num];
    
    // Use function to populate array with random numbers
    populate_numbers(a, num);
    
    // Use function to print all numbers in the array
    print_numbers(a, num);
    
    // Display the minimum number in the array
    cout << "Minimum number: \t" << array_min(a, num) << endl;
    
    // Display the average of all numbers in the array
    cout << "Average of numbers: \t" << array_avg(a, num) << endl; 
 
    return 0; 
} 