/*
Aparna Harry
lab 11, introduction to function
*/
#include<iostream>
using namespace std;
// void function doesn't return any value
void printhello(){
    cout<<"Hello function!"<<endl;
    return;
}

// void function with parameters
void greeting( string name){
    cout<<"Good afternoon "<<name<<endl;
    return;
}

// example 3, function that returns an integer(whole number)
int returnfive(){
    return 5;
}

// example 4, any code after the return will not be executed
void printsome(){
    cout<<"Something"<<endl;
    return;
    cout<<"After the return"<<endl;
}

int somenumber(){
    int num = 10;
    return num;
    num *= 2;
    return num; 
}

// example 5, function that calculates and returns the area of a square
float areasquare(float side){
    float area = side*side;
    return area;

}

// example 6, function that calculates and returns the product of two numbers
int product(int n1, int n2){
    return n1*n2;

}

// example 7, function that calculates and retirns the fahrenheit trmperature
double fah(double celsius){
    return celsius*1.8 + 32;

}

void printfah(double f){
    cout<<"The fahrenheit temperature is "<<f<<endl;
}

// example 8: check a number
string checknumber(int number){
    if(number== 0){
        return "zero";
    }
    else if(number>0){
        return "positive";
    }
    else{
        return "negative";
    }
    
}

void printnumber(string n){
    cout<<"The number is "<<n<<endl;
}

// EXERCISE
if (modulo(mod%2==0))
    return end2;
    cout<<"Is "<<modulo<<"even? "<<end2<<endl;
