#include <iostream>

using namespace std;

int main(void)
{
    int x = 5;
    int y = 2;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x == y : " << (x==y) << endl;
    cout << "x != y : " << (x!=y) << endl;
    cout << "x > y  : " << (x>y) << endl;
    cout << "x < y  : " << (x<y) << endl;
    cout << "x >= y : " << (x>=y) << endl;
    cout << "x <= y : " << (x<=y) << endl;
  
    cout << "!(x>y) : " << !(x>y) << endl;
    cout << "(x>y) && (x<y) : " << ((x<y) && (x>y)) << endl;
    cout << "(x>y) || (x<y) : " << ((x<y) || (x>y)) << endl;
    

    return 0;
}