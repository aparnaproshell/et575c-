/*
Aparna Harry
November 23, 2025
Homework 8: create and manipulate values in 2D arrays
*/

#include<iostream> 
using namespace std; 

const int ROWCOL_ARRAY = 4; 

// Function to search for a value in a 2D array 
void search_2D_array(int arr[ROWCOL_ARRAY][ROWCOL_ARRAY], int searchValue, int position[]) {
    // Initialize position array with -1 to indicate "not found"
    position[0] = -1; // Row index
    position[1] = -1; // Column index
    
    // Loop through each row of the 2D array
    for (int i = 0; i < ROWCOL_ARRAY; i++) {
        // Loop through each column in the current row
        for (int j = 0; j < ROWCOL_ARRAY; j++) {
            // Check if current element matches the search value
            if (arr[i][j] == searchValue) {
                // Value found! Save the row and column indices
                position[0] = i; // Save row index
                position[1] = j; // Save column index
                return; // Exit function since value is found
            }
        }
    }
    // If we reach here, value was not found (position remains [-1, -1])
}

// Function to display a message based on search results
void display_message(int searchValue, int position[]) {
    // Check if the value was found by examining the row position
    // If position[0] is -1, the value was not found
    if (position[0] == -1) {
        // Display "not found" message
        cout << "Number " << searchValue << " was not found" << endl;
    } else {
        // Display "found" message with row and column indices
        cout << "Number " << searchValue << " was found in row " << position[0] 
             << " and column " << position[1] << endl;
    }
}

int main() { 
    // Initialize 4x4 array with predefined values
    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] = { 
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16} 
    }; 
    
    // Variable to store the search value from user
    int searchValue;
    
    // Array to store the position (row and column) of found value
    // position[0] = row index, position[1] = column index
    int position[2];
    
    // Display the array to the user
    cout << "\n ----- 4x4 Array ----- " << endl;
    for (int i = 0; i < ROWCOL_ARRAY; i++) {
        for (int j = 0; j < ROWCOL_ARRAY; j++) {
            // Print each element with proper spacing
            cout << ar[i][j] << "\t";
        }
        cout << endl; // New line after each row
    }
    
    // Prompt user to enter the value to search for
    cout << "\nEnter a value to search for: ";
    cin >> searchValue;
    
    // Call function to search for the value in the 2D array
    // Pass the array, search value, and position array by reference
    search_2D_array(ar, searchValue, position);
    
    // Call function to display the appropriate message
    // Based on whether the value was found or not
    display_message(searchValue, position);
 
    return 0; 
}