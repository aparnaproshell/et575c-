/*
Aparna Harry
Oct 8, 2025
lab 8, for loop
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n----- Example 1: for loop---- "<<endl;
    // print Hello five times 
    for(int action=1; action<=5; action++){
        cout<<"Hello "<<action<<endl;
    }

    cout<<"\n----- Example 2: for loop as a decrement counter---- "<<endl;
    // print from 9 to 1
    int n = 9;
    for(n; n>=1; n--){
        cout<<n<<"\t";
    }
    cout<<endl;

    cout<<"\n----- Example 3: for loop as an increment counter with different steps---- "<<endl;
    // print from 1 to 20 in a step of 3
    for(int m = 1; m <= 20; m += 3){
        cout<<m<<"\t"<<endl;

    }
    cout<<endl;

    cout<<"\n----- Example 4: for loop with conditional statement---- "<<endl;
    // print all numbers, between -10 and 10, that are multiple of 3
    for(int p = -10; p<=10; p++){
        if(p%3==0 && p!=0){
            cout<<p<<"\t";
        }
    }
    cout<<endl;

    cout<<"\n----- Example 5: for loop with conditional statement---- "<<endl;
    // count all even numbers between 5 and 20
    int even_count = 0;
    for(int p = 5; p<=20; p++){
        if(p%2==0 && p!=0){
            even_count ++;
        }
    }
    //print result
    cout<<"There is/are "<<even_count<<" even number/s"<<endl;

    cout<<"\n----- Example 6: for loop with conditional statement---- "<<endl;
    // add all negative numbers between -8 and 5
    int sum_negative = 0;
    int x = -8; 
    for(x ; x<=5; x++ ){
        if(x<0){
            sum_negative += x;
        }
    }
    // print result
    cout<<"The total sum of negative numbers= "<<sum_negative<<endl;




    cout<<"\n----- EXERCISE 1: for loop as a decrement counter with step of 5 ---- "<<endl;
    // demonstrate a loop body code decrement counter of 21 to -21 (inclusive) in steps of 5
    // then count in iteration these numbers if they are a multiple of 2, an even number count
    // declare integer variable to store the value counter f before evaluating its property f%2==0
    int count_multiples2 = 0; 
    // start loop with for statement using initial action f = 21
    // boolean expression as f comparison operator greater than or equal to -21
    // update action minus assignment operator(self-subtraction) by 5 for each iteration
    for(int f = 21; f >= -21; f -= 5){
        // print the current value of f from its passing value incrementing step 5 through for loop
        // escape character to print horizontal tab space between each value of f
        cout<<f<<"\t"; 
        // check if the current value of f is a multiple of 2 (even number) with modulus arithmetic operator %
        // the modulo operator (%) returns division remainder of 0 as true if f is evenly divisible by 2
        // therefore using if statement if equal to ==0, f is a multiple of 2, the value counter is multiplied by 2 at each iteration
        if(f % 2 == 0){
            // increment operator introduces counter upon this statement if f is even remains true
            count_multiples2++; 
        }
    }
    // blank line for clear output of loop mechanism
    cout<<endl; 
    // print in statement the count of times the counter (f value) was a multiple of 2 (even number)
    cout<<"There is/are "<<count_multiples2<<" even number/s in this sequence."<<endl;


    cout<<"\n----- EXERCISE 2: for loop with user input and increment of 4 ---- "<<endl;
    // demonstrate a loop body code for an input from user, increments by 4 each time in iteration
    // values printed up to 30 (inclusive)
    // declare integer variable and store the user's initialization value for the counter
    int user_input = 0; 
    // prompt user to enter an initial value from the keyboard
    cout<<"Enter an initial value: ";
    // store the console input into variable of for manipulation, user_input
    cin>>user_input;
    // input validation: if the user's input is less than or equal to 30, then proceed with this for statement
    if(user_input <= 30){
        // the loop starts at value of input as integer variable counter for initial action
        // boolean expression uses comparison operator less than or equal to 30 increments by 4 each iteration
        // update action assignment operator (self-addition) to add 4 to the counter upon each iteration
        for(int counter = user_input; counter <= 30; counter += 4){
            // print the current value of the counter with each passing value incrementing by step 4
            // escape character prints horizontal tab space between each value of counter
            cout<<counter<<"\t"<<endl; 
        }
    }
    else {
        // necessary is an error condition
        // handle error if user enters a value greater than 30,the loop will not iterate and print message
        cout<<"Initial value is greater than 30. Try number 30 or less."<<endl;
    }
    // blank line for clear output of loop mechanism
    cout<<endl;

    return 0;
}