#include <iostream>

using namespace std;


// 函数重载：函数名相同，实现的功能不同，通过输入的参数类型区分。
int plusFunction(int x, int y)
    {
        return x+y;
    }

double plusFunction(double x, double y)
    {
        return x-y;
    }


int main(void)
{   
    int x = 5,y = 2;
    double num1 = 1.2,num2 = 2.4;

    cout <<"x = " <<x <<endl;
    cout <<"y = " <<y <<endl;
    cout <<"x+y = " <<plusFunction(x, y) <<endl;

    cout <<"num1 = " <<num1 <<endl;
    cout <<"mum2 = " <<num2 <<endl;
    cout <<"num1-num2 = " <<plusFunction(num1, num2) <<endl;

    return 0;
}