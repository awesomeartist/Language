#include <iostream>

using namespace std;

void myFunction(string fname)
    {
        cout <<"firstName: " << fname <<endl;
    }
int main(void)
{
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");

    return 0;
}