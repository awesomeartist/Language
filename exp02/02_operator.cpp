#include <iostream>

using namespace std;

int main(void)
{
    int x = 5;
    x += 3;
    cout <<"x += 3:" <<x <<endl;

    x = 5;
    x -= 3;
    cout <<"x -= 3:" <<x <<endl;

    x = 5;
    x *= 3;
    cout <<"x *= 3:" <<x <<endl;

    x = 5;
    x /= 3;
    cout <<"x /= 3:" <<x <<endl;

    x = 5;
    x &= 3;
    cout <<"x &= 3:" <<x <<endl;

    x = 5;
    x |= 3;
    cout <<"x |= 3:" <<x <<endl;

    x = 5;
    x ^= 3;
    cout <<"x ^= 3:" <<x <<endl;

    x = 5;
    x >>= 3;
    cout <<"x >>= 3:" <<x <<endl;

    x = 5;
    x <<= 3;
    cout <<"x <<= 3:" <<x <<endl;


    return 0;
}