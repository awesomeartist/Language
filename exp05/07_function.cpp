#include <iostream>

using namespace std;

void swap1(int x, int y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
void swap2(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

void swap3(int* x, int* y)
    {
        int* temp = x;
        x = y;
        y = temp;
    }
int main(void)
{   
    int x = 5, y = 2;
    int* ptr1=&x;
    int* ptr2=&y;

    cout <<"before swap:"  <<endl;
    cout <<"address of x:" <<&x <<" and x = " <<x <<endl;
    cout <<"address of y:" <<&y <<" and y = " <<y <<endl;

    swap1(x, y);
    cout <<"after swap1:"  <<endl;
    cout <<"address of x:" <<&x <<" and x = " <<x <<endl;
    cout <<"address of y:" <<&y <<" and y = " <<y <<endl;

    swap2(x, y);
    cout <<"after swap2:"  <<endl;
    cout <<"address of x:" <<&x <<" and x = " <<x <<endl;
    cout <<"address of y:" <<&y <<" and y = " <<y <<endl;

    swap3(ptr1, ptr2);
    cout <<"after swap2:"  <<endl;
    cout <<"address of x:" <<&x <<" and x = " <<x <<endl;
    cout <<"address of y:" <<&y <<" and y = " <<y <<endl;
    

    return 0;
}