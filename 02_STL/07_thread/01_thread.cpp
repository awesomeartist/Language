#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

class A
{
private:
    int i;
public:
    void fn()
    {
        i = 0;
        while (i < 10)
        {
            cout << "A::fn" << i << endl;
            i++;
            this_thread::sleep_for(chrono::milliseconds(100));
        }
    }

    void fn2(int &num)
    {
        cout << "A::fn2 num = " << num << endl;
        num += 100;
    }

};

int i = 0;

void tf()
{
    while (i < 10)
    {
        cout << "Sub-thread:" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(10));
        i++;
    }
}


int main()
{
    // thread th(tf);

    A a;
    int num = 10;
    // thread th(&A::fn, &a);
    thread th(&A::fn2, &a, ref(num));

    while(i < 10)
    {
        cout << "Main thread:" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(10));
        i++;
    }
    th.join();
    cout << "Main num = " << num << endl;


    return 0;
}