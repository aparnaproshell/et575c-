/*
Aparna Harry
Nov 30, 2025
Homework 9: Reversing the values of an array

Description: This program implements a complete array manipulation system that reverses
the values of a one-dimensional array named noise[]. The program prompts the user to 
enter an array size between 1 and 100 (with validation), generates random numbers 
between 10 and 30 to populate the array, displays the original array, reverses the 
array by swapping elements, and displays the reversed array.

Required Functions:
- arraysize(): Prompts and validates user input for array size (1-100)
- randPopulate(): Fills array with random numbers between 10 and 30
- print(): Displays all array values
- reverse(): Reverses array by swapping elements from both ends toward middle
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;

// Function prototypes
int arraysize();
void randPopulate(int arr[], int size);
void print(const int arr[], int size);
void reverse(int arr[], int size);

int main() {
    // Seed the random number generator with current time
    // This ensures different random numbers each time the program runs
    srand(time(0));
    
    // Get array size from user (validated between 1 and 100)
    int sizearray = arraysize();
    
    // Declare array with the obtained size
    // Variable-length arrays are supported in C++ (though not standard C++)
    int noise[sizearray];
    
    // Populate array with random values between 10 and 30
    randPopulate(noise, sizearray);
    
    // Display original array
    cout << "\nOriginal set:" << endl;
    print(noise, sizearray);
    
    // Reverse the array by swapping elements
    reverse(noise, sizearray);
    
    // Display reversed array
    cout << "\nReversed set:" << endl;
    print(noise, sizearray);
    
    return 0;
}

/*
arraysize() function
Purpose: Prompts user for array size and validates input
Returns: Valid array size between 1 and 100 (inclusive)
Input validation: Continues prompting until valid number is entered
*/
int arraysize() {
    int size;
    
    // Loop until valid input is received
    do {
        cout << "Enter an array size between 1 and 100: ";
        cin >> size;
        
        // Check if input is out of valid range
        if (size < 1 || size > 100) {
            cout << "Invalid input! Size must be between 1 and 100." << endl;
        }
    } while (size < 1 || size > 100);  // Continue if size is invalid
    
    return size;  // Return the validated size
}

/*
randPopulate() function
Purpose: Fills array with random numbers between 10 and 30 (inclusive)
Parameters: 
    - arr[]: Array to be populated
    - size: Number of elements in the array
Logic: Uses rand() % 21 + 10 to generate numbers in range [10, 30]
    - rand() % 21 gives values 0-20
    - Adding 10 shifts range to 10-30
*/
void randPopulate(int arr[], int size) {
    // Loop through each element of the array
    for (int i = 0; i < size; i++) {
        // Generate random number between 10 and 30
        // rand() % 21 produces 0-20, adding 10 gives 10-30
        arr[i] = rand() % 21 + 10;
    }
}

/*
print() function
Purpose: Displays all values in the array with proper formatting
Parameters:
    - arr[]: Array to be printed (const to prevent modification)
    - size: Number of elements in the array
Output format: Values are printed with width of 12 for alignment
*/
void print(const int arr[], int size) {
    // Loop through each element and print with formatting
    for (int i = 0; i < size; i++) {
        // Print each element with a space separator
        cout << arr[i] << " ";
    }
    cout << endl;  // Print newline after all values
}

/*
reverse() function
Purpose: Reverses the order of elements in the array
Parameters:
    - arr[]: Array to be reversed (modified in place)
    - size: Number of elements in the array
Algorithm: Swap elements from both ends moving toward the middle
    - First with last, second with second-to-last, etc.
    - Only need to iterate through first half of array
*/
void reverse(int arr[], int size) {
    int temp;  // Temporary variable for swapping
    
    // Loop through first half of array
    // We only need to swap up to the midpoint
    for (int i = 0; i < size / 2; i++) {
        // Swap element at position i with element at position (size - 1 - i)
        // Example: if size = 6, when i = 0, swap arr[0] with arr[5]
        //                        when i = 1, swap arr[1] with arr[4]
        //                        when i = 2, swap arr[2] with arr[3]
        temp = arr[i];                    // Store current element
        arr[i] = arr[size - 1 - i];       // Copy from opposite end
        arr[size - 1 - i] = temp;         // Place stored value at opposite end
    }
}
