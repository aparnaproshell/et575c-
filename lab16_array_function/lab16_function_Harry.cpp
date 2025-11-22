/*
Aparna Harry
Nov 19, 2025
lab 17, 2D array
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// example 1: declaring a 2D array
void array_dec() {
    int array[3][5] ={
        {5 ,10},
        {-2, -9},
        {6},
    };

    cout<<"3rd element in the second row "<<array[1][2]<<endl;
}

// example 2, function to print each value in a 2D array
const int NUMCOLS = 5;
void print2d(int a[][NUMCOLS], int rowsize){
    for (int row = 0; row <rowsize; row ++){
        for (int col = 0; col<NUMCOLS; col++){
            cout<<a[row][col]<<"\t";
        }
        cout<<endl;
    }    
}

// example 3, define a function to populate a 2D array
void populate_array(int arr[][3], int rowsize, int colsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<colsize; col++){
            int n;
            cout<<"Enter a number: ";
            cin>>n;
            arr[row][col] = n;
        }
    }
}

void print_array(int arr[][3], int rowsize, int colsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<colsize; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}

// example 4: function that sum all the numbers in a 2D array and returns the total sum
int sum_all(int arr[][3], int rowsize, int colsize){
    int sum = 0;
        for (int row = 0; row < rowsize; row++){
        for (int col = 0; col < colsize; col++){
            sum += arr[row][col];
        }
    }
    return sum;
    }

    // example 5: function that returns the total of odd numbers in a 2D array 
    int total_odd(int arr[][3], int rowsize, int colsize){
        int sum_odd = 0;
            for (int row = 0; row < rowsize; row++){
            for (int col = 0; col < colsize; col++){
                if (arr[row][col] % 2 ==1 && arr[row][col] !=0 ){
                    sum_odd ++;
                } 
            }
        }

        return sum_odd;
}

// EXERCISE: Lab 17 - Random Number Array with Average Calculation

// Function to populate a 3x4 array with random numbers between 0 and 100
void populate(int arr[][4], int rowsize, int colsize){
    srand(time(0));
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            arr[row][col] = rand() % 101;  // Generate random number 0-100
        }
    }
}

// Function to calculate and return the average of all numbers in the array
double average(int arr[][4], int rowsize, int colsize){
    int sum = 0;
    for (int row = 0; row < rowsize; row++){
        for (int col = 0; col < colsize; col++){
            sum += arr[row][col];
        }
    }
    return (double)sum / (rowsize * colsize);
}

// Function to display the array
void display_array(int arr[][4], int rowsize, int colsize){
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            cout << arr[row][col] << "\t";
        }
        cout << endl;
    }
}