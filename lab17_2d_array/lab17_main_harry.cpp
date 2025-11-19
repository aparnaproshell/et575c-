/*
Aparna Harry
Nov 19, 2025
lab 17, 2D array
*/
#include <iostream>
#include "lab17_function_harry.cpp"
using namespace std;

int main() {
    cout<<"\n --- example 1: array declarations ----"<<endl;
    array_dec();

    cout<<"\n --- example 2: print each value in a 2D array ----"<<endl;
    const int NUMCOLS = 5;
    int ar[3][NUMCOLS] ={
        {5, 10},
        {-2, -9},
        {6}
    };
    
    print2d(ar,3);

    cout<<"\n --- example 3:populating an array with numbers ----"<<endl;
    // declare a 2D array
    int arr_num[2][3];

    // call the function
    populate_array(arr_num, 2, 3);
    print_array(arr_num, 2, 3);

    cout<<"\n --- example 4: sum of all numbers in a 2D arra ---"<<endl;
    int s = sum_all(arr_num, 2, 3);
    cout<<"The total sum "<<s<<endl;

    cout<<"\n --- example 5:odd numbers in a 2D array ---"<<endl;
    int c = total_odd(arr_num, 2, 3);
    cout<<"Total odd numbers = "<<c<<endl;
    return 0;
}