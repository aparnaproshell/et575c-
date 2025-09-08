/*
Aparna Harry
Lab 3, string and string methods
Sep 8, 2025
*/
#include<iostream>
#include<string>

using namespace std;

int main() {
    cout<<"\n ----- Example 1: string indexing ----- "<<endl;
    string first_name = "Peter";
    cout<<"The 3rd character = "<<first_name[2]<<endl;
    cout<<"The 1st character = "<<first_name.at(0)<<endl;

    cout<<"\n ----- Example 2: amount of character in a string ----- "<<endl;
    int characters = first_name.length();
    cout<<"There is "<<characters<<" character/s in "<<first_name<<endl;

    cout<<"\n ----- Example 3: concatenate character/s in a string ----- "<<endl;
    string last_name = "Pan";
    string username = "PP123";
    cout<<"concatenated word = "<<first_name + last_name + username<<endl;

    cout<<"\n ----- Example 4: subtracting characters in string ----- "<<endl;
    string msg = "Today is a beautiful day!";
    // extract 5 characters from the 3rd character
    string subst_char = msg.substr(2, 5);
    cout<<"Extracted characters = "<<subst_char<<endl;

    cout<<"\n ----- Example 5: inserting characters in a string ----- "<<endl;
    // insert the word "maybe"
    msg.insert(5, " maybe");
    cout<<"After insert method = "<<msg<<endl;

    cout<<"\n ----- Example 6: inserting characters to the end of a string ----- "<<endl;
    msg.append(" -- by Prof. Wu");
    cout<<"After append method = "<<msg<<endl;

    cout<<"\n ----- Example 7: inserting characters to the end of a string ----- "<<endl;
    msg.replace(17,9,"bad");
    cout<<"After replace method = "<<msg<<endl;

    cout<<"\n ----- Example 8: erasing characters from a string ----- "<<endl;
    // erase the word 'Today'
    msg.erase(0, 5);
    cout<<"After erase method = "<<msg<<endl;

    cout<<"\n ----- Example 9: find characters in a string ----- "<<endl;
    // find method returns the index number of the first found.
    // if the character was not found, it returns -1
    // find the word 'Prof'

    int index_prof = msg.find("Prof");
    cout<<"The index of Prof = "<<index_prof<<endl;

    cout<<"\n ----- EXERCISE ----- "<<endl;
    string word ="";
    cout<<"Type a word from the keyboard "<<endl;
    cin>>word;
    //print 2nd character
    cout<<"2nd character:       "<<word[1]<<endl;

    //print length
    int letters = word.length();
    cout<<"word has:             "<<letters<<" characters "<<endl;

    // replace 2 characters from 3rd
    word.replace(2,2,"--$--");
    cout<<"Replace word:        "<<word<<endl;

    // erase the end 3 characters
    word.erase(word.length()-3,3);
    cout<<"Remove end characters:   "<<word<<endl;

    return 0;
}