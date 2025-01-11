#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>

using namespace std;


int i = 0;
mutex mtx;

void tf()
{
    while (i < 10)
    {   
        unique_lock<mutex> lk(mtx);
        cout << "Sub-thread:" << i << endl;
        i++;
        this_thread::sleep_for(chrono::milliseconds(10));
        
    }
}


int main()
{
    thread th(tf);

    while(i < 10)
    {
        unique_lock<mutex> lk(mtx);
        cout << "Main thread:" << i << endl;
        i++;
        this_thread::sleep_for(chrono::milliseconds(10));
        
    }
    th.join();


    return 0;
}