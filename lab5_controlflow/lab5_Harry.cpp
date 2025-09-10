/*
Aparna Harry
Lab 5, Control Flow
Sep 10, 2025
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n ----- Example 1: bool variable ----- "<<endl;
    // check if a number is positive
    //step 1) declare and collect a number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // step 2) check if the number is positive
    bool checkpositive = n>=0;
    // step 3 print the result
    cout<<"Is "<<n<<" positive? "<<checkpositive<<endl;

    cout<<"\n ----- Example 2: if statement ----- "<<endl;
    // change the checking_code to 999 if a number is positive
    int checking_code = 111;
    if(n>=0){
        checking_code = 999;  
    }
    cout<<"checking code = "<<checking_code<<endl;

    cout<<"\n ----- Example 3: if-else statement ----- "<<endl;
    // check if a number is even or odd
    if(n%2 == 0){
        cout<<n<<" is EVEN"<<endl;
    }
    else{
        cout<<n<<" is ODD"<<endl;
    }

    cout<<"\n ----- Example 4: if-else statement ----- "<<endl;
    // absolute value
    if(n>=0){
        cout<<n<<" is positive"<<endl;
    }
    else{
        cout<<n<<" is negative"<<endl;
        n*=-1;
        cout<<"The absolute value is "<<n<<endl;
    }

    cout<<"\n ----- Example 5: multiway statement ----- "<<endl;
    // select the color according to a wavelength
    int wavelength = 0;
    string emitted_color = "";
    cout<<"Enter a wavelength: ";
    cin>>wavelength;
    //multiway conditional statement
    if( 0<=wavelength && wavelength<=379)
        emitted_color = "ultraviolet";
    else if (380<=wavelength && wavelength<=520)
        emitted_color = "blue";
    else if (521<=wavelength && wavelength<=590)
        emitted_color = "green";
    else if (591<=wavelength && wavelength<=740)
        emitted_color = "red";
    else if (wavelength<=741)
        emitted_color = "infrared";
    else
        emitted_color = "unable to read";
    
    // print result
    cout<<"The emitted color of wavelength "<<wavelength<<" is "<<emitted_color<<endl;



    
    cout<<"\n ----- EXERCISE ----- "<<endl;
    // declare variables
    string gpa = "";
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;

    // collect the values for final_exam, labs, and homework
    cout<<"Enter the final exam grade "<<endl;
    cin>>final_exam;
    cout<<"Enter a grade for the lab "<<endl;
    cin>>labs;
    cout<<"Enter a grade for the homework "<<endl;
    cin>>homework;

    // calculate the grade = final_exam *0.5 + labs*0.3 + homework*0.2
    grade = final_exam*0.5 + labs*0.3 + homework*0.2
  
    //multiway conditional statement
    
    if( grade: between 100 and 90, GPA = A)
        emitted_color = "ultraviolet";
    else if (grade: between 89 and 80, GPA = B)
        emitted_color = "blue";
    else if (grade: between 79 and 70, GPA = C)
        emitted_color = "green";
    else if (grade: between 69 and 60, GPA = D)
        emitted_color = "red";
    else if (grade: below 59, GPA = F)
        emitted_color = "infrared";
    else
        any another grade, GPA = ""
        
    //print result
     <<"a * b = "<< ( a * b )<<endl;
    return 0;
}