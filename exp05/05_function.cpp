#include <iostream>

using namespace std;

void myFunction(string fname, int age)
    {
        cout <<"firstName: " << fname <<"  age:" <<age <<endl;
    }
int main(void)
{
    myFunction("Liam", 16);
    myFunction("Jenny", 18);
    myFunction("Anja", 30);

    return 0;
}