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
    cout<<"Enter the final exam grade: "<<endl;
    cin>>final_exam;
    cout<<"Enter a grade for the lab: "<<endl;
    cin>>labs;
    cout<<"Enter a grade for the homework: "<<endl;
    cin>>homework;

    // calculate the grade = final_exam *0.5 + labs*0.3 + homework*0.2
    grade = final_exam*0.5 + labs*0.3 + homework*0.2;
  
    // multiway conditional statement
    // if grade can be = A it must be between 90 and 100
    if(grade >= 90 && grade <= 100) { 
        gpa = "A";
    }
    // if grade can be = B it must be between 80 and 89
    else if(grade >= 80 && grade < 90) { 
        gpa = "B";
    }
    // if grade can be = C it must be between 70 and 79
    else if(grade >= 70 && grade < 80) { 
        gpa = "C";
    }
    // if grade can be = D it must be between 60 and 69
    else if(grade >= 60 && grade < 70) { 
        gpa = "D";
    }
    // if grade can be = F it must be less than 60
    else if(grade < 60) { 
        gpa = "F";
    }
    // handle any other grade values outside the defined ranges
    else {
        gpa = "";
    }
    
    // print the final grade and equivalent letter GPA
    cout<<"A final grade of "<<grade<<" is equivalent to a GPA of "<< gpa << endl;

    return 0;
}

