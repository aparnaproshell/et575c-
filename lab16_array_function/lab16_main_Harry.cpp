/*
Aparna Harry et575h1b
lab 16, array in a function
Nov 17, 2025
*/

#include<iostream>

#include"lab16_function_Harry.cpp"
using namespace std;

int main(){
    cout<<"\n----- Example 1: collect and populate data into an array ----"<<endl;
    // intialize variables and array
    int arraysize = 3;
    int arrnum[arraysize];

    // calling functions
    fillup(arraysize, arrnum);
    printarray(arraysize, arrnum);

    cout<<"\n----- Example 2: program to search a number in an array ----"<<endl;
    // initialize variables and array
    int arr_pos_numbers[ARRAY_SIZE];
    int listsize = 0;
    int targetnumber = 8;

    // calling functions 
    fillarray(arr_pos_numbers, listsize);
    printarray(listsize, arr_pos_numbers); // testing if the positive numbers were properly collected
    int resultsearch = search(arr_pos_numbers, listsize, targetnumber);

    printresult(resultsearch,targetnumber );

    cout<<"\n----- EXERCISE ----"<<endl;
    // initialize variables and array
    int arr_number[] ={6, -10, 9, 12, -3, -8, 5, 7, 4, 0};


    return 0;
}
