/*
Aparna Harry
Sep 15, 2025
lab 6, nested conditional statement and switch
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "\n ----- Example 1: nested conditional statement -----" << endl;
    int n = -8;
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << "The number is positive and EVEN" << endl;
        }
        else
        {
            cout << "The number is positive and ODD" << endl;
        }
    }
    else if (n < 0)
    {
        if (n % 2 == 0)
        {
            cout << "The number is NEGATIVE and EVEN" << endl;
        }
        else
        {
            cout << "The number is NEGATIVE and ODD" << endl;
        }
    }
    else
    {
        cout << "The number is zero" << endl;
    }

    cout << "\n ----- Example 2: organize three numbers in decreasing order -----" << endl;
    // declare the identifiers (variable names)
    int num1, num2, num3;

    // display a message and collect the three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // check if num1 is greater than num2 and num3
    if (num1 > num2 && num1 > num3)
    {
        if(num2>num3)
            cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
            cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    // check if num2 is the greatest
    else if (num2 > num1 && num2 > num3)
    {
        if (num1>num3)
            cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
            cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;  
    }
    // check if num3 is the greatest
    else if (num3 > num2 && num3 > num1)
    {
        if(num1>num2)
            cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
            cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }
    else
    {
        cout << "All three numbers are the same!" << endl;
    }

    cout << "\n ----- Example 3: switch -----" << endl;
    // select a day-off using switch-case statement
    int dayoff;
    cout<<"Select a day-off: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    cin>>dayoff;

    switch (dayoff)
    {
    case 1:
        cout<<"You are off on Monday"<<endl;
        break;
    case 2:
        cout<<"You are off on Tuesday"<<endl;
        break;
    case 3:
        cout<<"You are off on Wednesday"<<endl;
        break;
    case 4:
        cout<<"You are off on Thursday"<<endl;
        break;
    case 5:
        cout<<"You are off on Friday"<<endl;
        break;
    default:
        cout<<"Unable to read the day-off"<<endl;
        break;
    }

    cout << "\n ----- Example 4: switch to select a gender -----" << endl;
    char gender=' ';
    cout<<"Select a gender: "<<endl;
    cout<<"m or M for male"<<endl;
    cout<<"f or F for female"<<endl;
    cout<<"o or O for others"<<endl;
    cin>>gender;

    switch (gender)
    {
    case 'm': case 'M':
        cout<<"Gender = MALE"<<endl;
        break;
    case 'f': case 'F':
        cout<<"Gender = FEMALE"<<endl;
        break;
    case 'o': case 'O':
        cout<<"Gender = OTHERS"<<endl;
        break;
    default:
        cout<<"Gender = UNDEFINED"<<endl;
        break;
    }

    cout << "\n ----- EXERCISE -----" << endl;



    //create a program to satisfy the affordability price to a type of home
    // declare integer variable to hold savings amount
    int afford;
    cout << "Enter the amount of money on saving, " << endl;
    cin >> afford;
    // begin if statement check the savings integer are less than $199,999 and greater than 0
    // nested conditional print message to user 'Keep saving!'
    if (afford <= 199999 && afford > 0) 
    {
        cout << "Keep saving!" << endl;
    }
    // else if to check if the savings are between $200,000 and $500,000
    // nested condition(price range),to, nested conditonal print message(apartment or co-op type)
    else if (afford >= 200000 && afford <= 500000) 
    {
        cout << "With $" << afford << " you can afford an ";
        cout << "Apartment or co-op";
        if (afford >= 200000 && afford <= 300000)
        {
            cout << " :Studio" << endl;
        }
        else if (afford >= 300001 && afford <= 400000)
        {
            cout << " :1 BR + 1 Bath" << endl;
        }
        else if (afford >= 400001 && afford <= 500000)
        {
            cout << " :2 BRs + 1Bath" << endl;
        }
    }
    // nested condition(price range),to, nested conditonal print message(house type)
    else if (afford >= 500001 && afford <= 1000000) 
    {
        cout << "With $" << afford << " you can afford a ";
        cout << "House";
        if (afford >= 500001 && afford <= 700000)
        {
            cout << " :2 BRs + 2 Baths" << endl;
        }
        else if (afford >= 700001 && afford <= 1000000)
        {
            cout << " :3 BRs + 3 Baths" << endl;
        }
    }
    // check if the savings are above $1,000,000
    // conditional print message(mansion type)
    else if (afford >= 1000001) 
    {
        cout << "With $" << afford << " you can afford a ";
        cout << "Mansion" << endl;
    }
    // handle invalid or zero/negative savings
    else 
    {
        cout << "Have some savings!" << endl;
    }

    // Ask the user to type a number and evolve it if they want to double it
    double number;
    char afterselection;
    cout << "MESSAGE TO USER: Type a number: ";
    cin >> number;
    cout << "Does the user want the number to be doubled? (  N/n   or   Y/y  ): ";
    cin >> afterselection;

    // use switch statement to decide if user wants to double a number
    // assign switch keyword to char variable afterselection
    switch (afterselection)
    {
        // user input cases
        // if user inputs N or n, the number remains the same
    case 'N': case 'n':
        cout << "The number is set to---------" << number << endl;
        break;
    // if user inputs Y or y, the number is doubled using self-multiplication assignment operator
    case 'Y': case 'y':
        number *= 2;
        cout << "The number is set to---------" << number << endl;
        break;
    default:
    // if any other input, set number to 0
        number = 0;
        cout << "The number is set to---------" << number << endl;
        break;
    }
   
    return 0;
} 