#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;


int i = 0;
mutex mtx;
condition_variable cv;
bool sub_run = false;

void tf()
{
    while (i < 10)
    {   
        unique_lock<mutex> lk(mtx);
        cv.wait(lk, [&] {return sub_run;});
        cout << "Sub-thread:" << i << endl;
        i++;
        this_thread::sleep_for(chrono::milliseconds(10));
        sub_run = false;
        cv.notify_all(); 
    }
}


int main()
{
    thread th(tf);

    while(i < 10)
    {
        unique_lock<mutex> lk(mtx);
        cv.wait(lk, [&] {return !sub_run;});
        cout << "Main thread:" << i << endl;
        i++;
        this_thread::sleep_for(chrono::milliseconds(10));
        sub_run = true;
        cv.notify_all(); 
    }
    th.join();


    return 0;
}