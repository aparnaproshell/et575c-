/*
Aparna Harry
Nov 19, 2025
lab 17, 2D array
*/
#include <iostream>
#include "lab17_function_harry.cpp"
using namespace std;

int main() {
    cout<<"\n --- example 1: array declarations ---"<<endl;
    array_dec();

    cout<<"\n --- example 2: print each value in a 2D array ---"<<endl;
    const int NUMCOLS = 5;
    int ar[3][NUMCOLS] ={
        {5, 10},
        {-2, -9},
        {6}
    };
    
    print2d(ar,3);

    cout<<"\n --- example 3:populating an array with numbers ---"<<endl;
    // declare a 2D array
    int arr_num[2][3];

    // call the function
    populate_array(arr_num, 2, 3);
    print_array(arr_num, 2, 3);

    cout<<"\n --- example 4: sum of all numbers in a 2D array ---"<<endl;
    int s = sum_all(arr_num, 2, 3);
    cout<<"The total sum "<<s<<endl;

    cout<<"\n --- example 5:odd numbers in a 2D array ---"<<endl;
    int c = total_odd(arr_num, 2, 3);
    cout<<"Total odd numbers = "<<c<<endl;

    cout<<"\n --- EXERCISE: Random Array with Average ---"<<endl;
    cout<<"\n"<<endl;
    char choice;
    
    do {
        // Create 3x4 array
        int numbers[3][4];
        
        // Populate with random numbers
        populate(numbers, 3, 4);
        
        // Display the array
        
        cout<<"\n------ // ------- // ------- // -------"<<endl;
        display_array(numbers, 3, 4);
        
        // Calculate and display average
        double avg = average(numbers, 3, 4);
        cout << "\nAverage = " << avg << endl;
        
        // Ask for another run
        cout << "\nAnother run? (y/n): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    
    return 0;
}