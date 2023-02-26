#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int x = 9;
    int y = 2;
    double z = -0.5;

    cout <<"x = " <<x <<endl;
    cout <<"y = " <<y <<endl;

    cout <<"max(x, y) = " <<max(x, y) <<endl;
    cout <<"min(x, y) = " <<min(x, y) <<endl;
    cout <<"sqrt(x) = " <<sqrt(x) <<endl;
    cout <<"round(y) = " <<round(y) <<endl;
    cout <<"log(y) = " <<sqrt(y) <<endl;


    cout <<"abs(z)"
         <<"Returns the absolute value of z: " <<abs(z) <<endl;
    cout <<"acos(z)"
         <<"Returns the value of acos(z): " <<acos(z) <<endl;
    cout <<"asin(z)"
         <<"Returns the value of asin(z): " <<asin(z) <<endl;
    cout <<"atan(y)"
         <<"Returns the value of atan(y): " <<atan(y) <<endl;
    cout <<"exp(y)"
         <<"Returns the value of exp(x): " <<exp(y) <<endl;
    cout <<"pow(x,y)"
         <<"Returns the value of x to the power of y : " <<pow(x,y) <<endl;

    return 0;
}