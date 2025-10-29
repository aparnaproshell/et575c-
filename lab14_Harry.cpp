/******************************************************************************

Aparna Harry
lab14, recursive 

*******************************************************************************/
#include <iostream>

using namespace std;

void cheers(int n){
    if(n==1){
        // stop the recursive function
        cout<<"STOP"<<endl;
    }
    else{
        cout<<(n*2)<<"\t";
        //recursive function
        cheers(n-1);
    }
    
}

// recursive function to validate a number
int getnumber(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num <= 0) {
        cout << "Error! Enter a positive number: ";
        return getnumber(); // Recursive call if the number is not positive 
    }
    
    return num; // Return the valid positive integer
}

// linear recursive function

int linear_recursive(int m){
    if(m>1){
        return (m+1)*linear_recursive(m-2);
    }
    else{
        return 10;
    }
    
}

int main()
{
    cout<<"\n ---- example 3 -----"<<endl;
    int x = linear_recursive(7);
    cout<<"Final x = "<<x<<endl;
    /*
    function
    iteration   | m =   | if(m>1){return (m+1)*linear_recursive(m-2);   | else
        1       | m = 7 | (7+1=8)*(linear_recursive(7-2=5))             | skip
        2       | m = 5 | (8)(5+1=6)*(linear_recursive(5-2 = 3)         |
        3       | m = 3 | (8)*(6)*(3+1=4)*(linear_recursive(3-2=1)      | skip
        4       | m = 1 | false                                         | 10
        
    final x =   8*6*4*10
        
     
    cout<<"\n ---- example 1 -----"<<endl;
    cheers(5); //first time calling function 
    
    /*
    function
    iteration   |   int n   |  if(n==1)  |else {cout<<(n*2)   |   cheers(n-1)
        1       |   n=5     | false      |cout -->5*2 =10     |   cheers(5-1=4)
        2       |   n=4     | false      |cout -->4*2 = 8     |   cheers(4-1=3)
        3       |   n=3     | false      |cout -->3*2 = 6     |   cheers(3-1=2)
        4       |   n=2     | false      |cout -->2*2 = 4     |   cheers(2-1=1)
        5       |   n=1     | true (stop the recursive function)
        
    
    
    */
    cout<<"\n ---- example 2 -----"<<endl;
    {
        // calling function
        int num = getnumber();
        cout<<"entered number = "<<num<<endl;
    }
    

    return 0;
}