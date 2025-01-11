#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>
#include <future>


using namespace std;

int parallel_sum(int start, int end)
{
    cout << "sub-thread is running!" << endl;
    int sum = 0;
    for (int i = 0; i <= end; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    
    packaged_task<int(int, int)> task(parallel_sum);
    future<int> sum_future = task.get_future();
    this_thread::sleep_for(chrono::seconds(1));
    cout << "main-thread is running!" << endl;
    task(1, 100);
    cout << sum_future.get() << endl;


    return 0;
}