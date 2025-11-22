/*
Aparna Harry
lab 16, array in a function
Nov 17, 2025
*/

#include<iostream>

using namespace std;

// example 1: function to populate an array with numbers
// the numbers are collected from the user
void fillup(int sizearray, int arr[]){
    for (int i = 0; i < sizearray; i++){
        cout<<"Enter a number: ";
        cin>>arr[i];
    }
    cout<<endl;

}
// function to print values  in an array
void printarray(int sizearray, int arr[]){
    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// example 2: collect positive numbers (max 10 numbers), and search if a number exists amount the collected numbers
// function to collect non-negative number (max 20 numbers). If a negative number is entered, the function will stop, 
const int ARRAY_SIZE = 10;

void fillarray(int *arr, int &numberuserindex){
    int number, index = 0;

    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if(number>0){
            arr[index] = number;
            index ++;
        }
    }while(number>0 && index< ARRAY_SIZE);
    
    // update the value of variable numberuserindex, which is the last index of all positive numbers
    numberuserindex = index;
}

// search function to search for a number in the array
int search(const int *arr, int numberusedindex, int target ){
    int index = 0;
    bool found = false;

    while ((!found) && (index<numberusedindex)){
        if(target == arr[index])
            found = true;
        else
            index++;
    }

    if(found)
        return index; // return the index where the target number is found
    else
        return -1; // return -1 if the target number is not found
}

// function to print result 
void printresult(int resultsearch, int target){
    cout<<"What is the index of number "<<target<<" in the array? "<<resultsearch<<endl;
    
}

// EXERCISE
// function that sums all even numbers in an array and returns the sum
int sumEvenNumbers(const int arr[], int size){
    int sum = 0;
    // loop through the array to find even numbers
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){  // check if number is even
            sum += arr[i];     // add even number to sum
        }
    }
    return sum;  // return the total sum of even numbers
}

// function that counts all negative numbers in an array and returns the count
int countNegativeNumbers(const int arr[], int size){
    int count = 0;
    // loop through the array to find negative numbers
    for(int i = 0; i < size; i++){
        if(arr[i] < 0){       // check if number is negative
            count++;           // increment count
        }
    }
    return count;  // return the total count of negative numbers
}