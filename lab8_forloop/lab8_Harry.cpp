/*
Aparna Harry
Oct 8, 2025
lab 8, for loop
*/
#include<iostream>

using namespace std;

int main(){
<<<<<<< HEAD
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


    cout<<"\n----- EXERCISE 1: ---- "<<endl;
    // 
    int f=21;
    for(f; f>=-21; f--){
            cout<<f<<"\t";
    }
    cout<<endl;

    cout<<"\n----- EXERCISE 2: ---- "<<endl;
    int user_input = 0;
    cout<<"Enter an initial value ";
    cin>>user_input;
    for(int user_input; user_input<=30; user_input +=4){
            cout<<user_input<<endl;
    }
 
    return 0;
}