#include <iostream>

using namespace std;

int main(void)
{
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + lastName;

    cout <<"fullName : " <<fullName <<endl;
    
    fullName = firstName + " " + lastName;
    cout <<"fullName : " <<fullName <<endl;
    
    fullName = firstName.append(lastName);
    cout <<"fullName : " <<fullName <<endl;

    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout <<"The length of the str string is : " <<str.length() <<endl;
    cout <<"The length of the str string is : " <<str.size() <<endl;
    
    return 0;
}