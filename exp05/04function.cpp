#include <iostream>

using namespace std;

void myFunction(string country = "Norway")
    {
        cout <<"Country: " << country <<endl;
    }
int main(void)
{
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");

    return 0;
}