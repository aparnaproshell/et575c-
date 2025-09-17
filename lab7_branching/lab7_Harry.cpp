/*
Aparna Harry
Sep 17, 2025
lab 7, branching mechanism using switch-case statement
*/

#include<iostream>
#include<string>

using namespace std;

int main(){

//declare variables for first and second number
//declare variables for operation
int FirstNumber, SecondNumber;
char operator;
//prompt user to enter these numbers first and second
cout<<"Enter the first number: "<<endl;
cin>>FirstNumber;

cout<<"Enter the second number: "<<endl;
cin>>SecondNumber;
//prompt user to enter an operation to be performed
cout<<"Choose an operation (+,-,*,/,%,q to quit): "<<endl;
cin>>operator;

//a switch-case will be used to perform result based on user's choice of operation
switch(operator)
{   // write case per each operation and its action, then result
    case '+':
        cout<<FirstNumber<<" + "<<SecondNumber<<" = "<< FirstNumber + SecondNumber <<endl;
        break;
    case '-':
        cout<<FirstNumber<<" - "<<SecondNumber<<" = "<< FirstNumber - SecondNUmber <<endl;
        break;
    case '*':
        cout<<FirstNumber<<" * "<<SecondNumber<<" = "<< FirstNumber * SecondNumber <<endl;
        break;
    case '/':
        if(SecondNumber != 0)
            cout<<FirstNumber<<" / "<<SecondNumber<<" = "<< FirstNumber / SecondNumber <<endl;
            else
            cout<<" / by zero not allowed. Second number cannot be zero."<<endl;
            cout<<"Enter q to quit and exit program."<<endl;
            cin>>operator;
            if(operator == 'q')
               break;
        break;
    case '%':
        if(SecondNumber != 0)
            cout<<FirstNumber<<" % "<<SecondNumber<<" = "<< FirstNumber % SecondNumber <<endl;
            else
            cout<<" % by zero not allowed. Second number cannot be zero."<<endl;
            cout<<"Enter q to quit and exit program."<<endl;
            cin>>operator;
            if(operator == 'q')
               break;
        break;
    default:
        cout<<"Invalid character entered, only (+,-,*,/,%) allowed."<<endl;
        cout<<"Enter q to quit and exit program."<<endl;
            cin>>operator;
            if(operator == 'q')
               break;
        break;
}
    return 0;
}
