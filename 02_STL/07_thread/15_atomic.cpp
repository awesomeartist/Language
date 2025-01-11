#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <mutex>
#include <atomic>

using namespace std;

// int total(0);
atomic_int total(0);
mutex mtx;

void fun()
{
    for (int i = 0; i < 1000000; i++)
    {
        // mtx.lock();
        total ++;
        total --;
        // mtx.unlock();
    }
}

int main()
{
    auto start = chrono::steady_clock::now();

    vector<thread> vec;
    for (int i = 0; i < 8; i++)
    {
        vec.emplace_back(fun);
    }

    for (int i = 0; i < 8; i++)
    {
        vec[i].join();
    }
    cout << "total = " << total << endl;
    auto end = chrono::steady_clock::now();
    auto dur = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << dur << endl;
    
    return 0;
}