#include <iostream>

using namespace std;

int main(void)
{
    string food = "Pizza";
    string &meal = food;

    cout << "food: " << food << endl;
    cout << "meal: " << meal << endl;
    cout << "&food=" << &food << endl;

    return 0;
}