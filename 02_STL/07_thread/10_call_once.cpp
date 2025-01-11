#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;
once_flag flag;

void init(thread::id id)
{
    lock_guard<mutex> lk(mtx);
    cout << "thread " << id << " init operation done!" << endl;
}

void tf()
{
    // init(this_thread::get_id());
    call_once(flag, init, this_thread::get_id());
    lock_guard<mutex> lk(mtx);
    cout << this_thread::get_id() << " this line is running!" << endl;
}

int main()
{
    thread th1(tf);
    thread th2(tf);
    thread th3(tf);
    thread th4(tf);
    thread th5(tf);

    th1.join();
    th2.join();
    th3.join();
    th4.join();
    th5.join();
    
    return 0;
}