#include <iostream>

using namespace std;

int main(void)
{
    int x = 5;
    int y = 2;

    cout <<"x = " <<x <<endl;
    cout <<"y = " <<y <<endl;

    if(x>y)
        cout <<"x is bigger than y." <<endl;
    else
        cout <<"x is not bigger than y." <<endl;


    string result = x>y?"x>y":"x<=y";

    cout <<"result : " <<result <<endl;

    return 0;
}