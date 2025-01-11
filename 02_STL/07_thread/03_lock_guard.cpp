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
        lock_guard<mutex> lock(mtx);
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
        lock_guard<mutex> lock(mtx);
        cout << "Main thread:" << i << endl;
        i++;
        this_thread::sleep_for(chrono::milliseconds(10));
        
    }
    th.join();


    return 0;
}