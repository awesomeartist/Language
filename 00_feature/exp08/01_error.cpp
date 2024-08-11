#include <iostream>
using namespace std;


int main(void)
{
    try
    {
        int age = 15;
        if(age >= 18)
            {
                cout <<"Access grand - you are old enough.\n";
            }
        else
            {
                throw(age);
            }
    }
    catch(int myNum)
    {
        cout <<"Access denied - you must be at least 18 years old.\n";
        cout <<"Age is: " <<myNum <<endl;
    }
    return 0;
}