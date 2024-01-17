#include <iostream>

using namespace std;

int main(void)
{
    int num[3] = {10, 20, 30};
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    string bands[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    
    cout << "cars[0] = " << cars[0] << endl;
    
    for(int i=0; i<4; i++)
        {
            cout << "cars[" << i << "] = " << cars[i] << endl;
        }

    return 0;
}