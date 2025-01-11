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
    // 马上启动
    // future<int> f1 = async(std::launch::async, parallel_sum, 1, 100);
    // 延迟启动，等待 f1.get()
    future<int> f1 = async(std::launch::deferred, parallel_sum, 1, 100);
    cout << "main-thread is running!" << endl;
    cout << f1.get() << endl;


    return 0;
}