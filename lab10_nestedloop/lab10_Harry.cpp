/*
Aparna Harry
Oct 15, 2025
lab 10, nested loop
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n----- Example 1: nested loops -----"<<endl;
    // each run of the outer loop, one complete cycle of an inner loop is run
    int i = 0;
    while(i<3){
        cout<<"OUTER LOOP"<<i;
        int j = 1;
        while(j<=5){
            cout<<"\tinner loop "<<j;
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<"\n----- Example 2: cinema seating grid -----"<<endl;
    int user_row;
    int seats;
    cout<<"Enter the number of rows: ";
    cin>>user_row;
    cout<<"Enter the number of seats; ";
    cin>>seats; 

    for(int row = 1; row<=user_row; row++ ){
        for(int s=1; s<seats; s++){
            cout<<"Row "<<row<<" seat "<<s<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n----- Example 3: 2D graphing -----"<<endl;
    int dimension = 9;
    for(int row = 1; row<=dimension; row++){
        for(int col = 1; col<=dimension; col++){
            if(col==5 || row==5)
                cout<<"  x  ";
            else
                cout<<"  .  ";
        }
        cout<<endl;
    }


    cout<<"\n----- Example 4:H graph -----"<<endl;
    dimension =10;
    for(int row=1; row<=dimension; row++){
        for(int col=1; col<=dimension; col++){
            if((4 >=col && col>= 3 && 8>=row && row>=3 || col>=5 && col<=6 && row>=5 && row<=6 || (col>=7 && col<=8 && row>=3 && row<=8)))
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }








    cout<<"\n----- EXERCISE a-----"<<endl;
    int sum=0, count=0;
    for (int n = 20; n> 0; n-=2){
        if (n%3 ==0){
            cout<<"Loop Iteration "<<count<<endl;
            count++;
            cout<<n<<"False "<<endl;
            continue;
        }
            sum += n;
            cout<<"Sum"<<sum<< sum + count<<sum<<endl;
            
    }
    cout<<"The sum is: "<<sum<<endl<<"The count is: "<<count<<endl;

    cout<<"\n----- EXERCISE b-----"<<endl;
    i=0;
    int add=0;
    while(i<=10){
        i++;
        if(i<5 && i !=2){   
            cout<<"i = "<<i<<endl;
            }
        else{continue;}
        add +=i;
    }
    cout<<"Add = "<<add<<endl;




    return 0;

}