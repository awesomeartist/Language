#include <iostream>

using namespace std;

int main(void)
{
    string food = "Pizza";
    string * ptr = &food;

    cout << "food = " << food << endl;
    cout << "&food = " << &food << endl;

    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;


    *ptr = "Hamburger";
    cout << "*ptr = " << *ptr << endl;
    cout << "food = " << food << endl;

    // output
    // food = Pizza
    // &food = 0x61fde0
    // ptr = 0x61fde0
    // *ptr = Pizza
    // *ptr = Hamburger
    // food = Hamburger
    return 0;
}