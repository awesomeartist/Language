#include <iostream>

using namespace std;

void print(int *x, int *y);

void swap1(int x, int y);

void swap2(int &x, int &y);

void swap3(int* x, int* y);

int main(void)
{   
    int x = 5, y = 2;

    cout << "before swap:"  << endl;
    print(&x, &y);

    swap1(x, y);
    cout << "after swap1:"  << endl;
    print(&x, &y);

    swap2(x, y);
    cout << "after swap2:"  << endl;
    print(&x, &y);

    swap3(&x, &y);
    cout << "after swap3:"  << endl;
    print(&x, &y);
    

    return 0;
}

void print(int *x, int *y)
    {
        cout << "address of x:" << x << " and x = " << *x << endl;
        cout << "address of y:" << y << " and y = " << *y << endl;
    }

void swap1(int x, int y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

// 引用
void swap2(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
// 指针
void swap3(int* x, int* y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
   