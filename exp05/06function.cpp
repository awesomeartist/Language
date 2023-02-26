#include <iostream>

using namespace std;

int myFunction(int x, int y)
    {
        return x+y;
    }
int main(void)
{   
    int x = 5, y = 2;
    int z;
    cout <<"x+y = " <<myFunction(x, y) <<endl;
    z = myFunction(x, y);
    cout <<"z = " <<z <<endl;

    return 0;
}