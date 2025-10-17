/*
Aparna Harry
Oct 14, 2025
lab 9, while and do-while loop
*/
#include<iostream>

using namespace std;

int main(){


    cout<<"\n ---- example 1: while loop as a counter ----"<<endl;
    // print from 1 to 5
    int n = 1;
    while(n<=5){
        cout<<n<<endl;
        n ++;
    }
    
    cout<<"\n ---- example 2: while loop as a counter ----"<<endl;
    // print from 3 to 0
    int m = 3;
    while(m>=0){
        cout<<m<<"\t";
        m --;
    }
    cout<<endl;

    cout<<"\n ---- example 3: while loop as a decrement counter ----"<<endl;
    m = 3;
    while(m-- >= 0){
        cout<<m<<"\t";
    }
    cout<<endl;

    cout<<"\n ---- example 4: while loop as a decrement counter ----"<<endl;
    m = 3;
    while(--m >= 0){
        cout<<m<<"\t";
    }
    cout<<endl;

    cout<<"\n ---- example 5: while loop to validate a number ----"<<endl;
    int num;
    cout<<"Enter a number between 10 and 20 inclusive ";
    cin>>num;

    // if the number is not between 10 and 20, use a while loop to recollect a number
    while(!(num>=10 && num<=20)){
    cout<<"Invalid. Enter a number between 10 and 20 again: ";
    cin>>num;
    }

    cout<<"The entered number is "<<num<<endl;

    cout<<"\n ---- example 6: do-while loop to validate a number ----"<<endl;
    do{
    cout<<"Enter a number between 10 and 20 inclusive ";
    cin>>num;
    }
    while(!(num>=10 && num<=20));

    cout<<"End of do-while loop. Entered number = "<<num<<endl;

    cout<<"\n ---- example 7: do-while loop to validate a number ----"<<endl;
    // do-while loop to run the program again
    // program checks if a number is positive, negative or zero.
    int number;
    char choice = 'y';
    do{
        cout<<"Enter a number: ";
        cin>>number;
        if(number==0){
            cout<<"The number is zero!"<<endl;
        }
        else if(number>0){
            cout<<number<<" is positive"<<endl;
        }
        else{
            cout<<number<<" is negative"<<endl;
        }
        cout<<"Do you want to check another number? ";
        cin>>choice;
    }
    while(choice=='y' || choice =='Y');

    cout<<"\n ---- example 8: do-while loop set to True----"<<endl;
    n = 0;
    int sum_positive = 0;
    do{
        cout<<"Enter a positive number: ";
        cin>>n;
        if(n>=0){
            sum_positive +=n;
        }
        else{
            break;
        }
    }
    while(true);

    cout<<"The total sum is "<<sum_positive<<endl;

    cout<<"\n ---- example 9: withdraw from a bank account ----"<<endl;
    int balance = 1000;
    int w = 0;

    while(true){
        cout<<"How much do you want to withdrawn? ";
        cin>>w;

        if(w>balance){
            cout<<"Can't withdraw $"<<w<<". Enter another amount .";
        }
        else{
            balance -= w;
            cout<<"Withdrawed $"<<w<<" The new balance $"<<balance<<endl;
            break;
        }
    }

    cout<<"Thank you for banking with us!"<<endl;

    cout<<"\n ---- example 10: continue statement ----"<<endl;
    // while loop to print, from 0 to 10, and add all the numbers except 5
    int sum_all= 0;
    int x = 0;
    while(x++ < 10){        
        if(x==5){
            continue;
        }
        sum_all += x;
        cout<<x<<"\t";
    }
    cout<<"The total sum of numbers = "<<sum_all<<endl;



    cout<<"\n ---- EXERCISE----"<<endl;
    // declare and initialize integer variables set to zero for all possible integer number inputs
    // variable to store user input numbers for processing after user's entry from keyboard
    int ops = 0;        
    // accumulator variable is stored while running the total of all entered numbers
    int increase = 0;   
    // begin do-while loop - execute at least once before checking user input if equal to 0
    // guarantees the code block in the loop checks condition and runs upon evaluation when true
    do{
        // ask user to enter a number from the console
        cout<<"Enter a number ";
        // after archiving user input and store into ops variable to entail value in the loop operations
        // maintains the value of each console input every iteration of the loop, and digits the value, dignifies
        // the added digits to the running total as conditioned by the loop until termination condition is met
        cin>>ops;   
        //if user entered 0, sentinel value for termination, the if condition is written with the comparison operator
        // equal to, to check if the value of ops is equal to 0
        if(ops==0){
            // use break statement to exit the loop immediately when == 0
            break;  
        }
        // for any non-zero number, the else block is the if-else statement is executed
        else{
            // compound assignment operator to add the input number to the running total of the loop
            // increase(total value) + ops(number value)equals variable increase, self-addition += is used
            increase += ops;    
            // print the current running total to user output console after each iteration of the loop
            // with final setting of total value after accumulating all processes of acquiring a number,
            // adding numbers in a total, and displaying the current total, variable increase remains with total
            cout<<"The total sum is____"<<increase<<endl;
        }
    }
    // while loop: prevail a condition that without terminating the code, there is no exit of the loop iteration
    // therefore creates an infinite loop which relies on a break statement for termination
    // the true variable is a boolean literal that is always true, as the loop continues indefinitely until break
    while(true);
    
    return 0;
}