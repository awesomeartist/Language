#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>
#include <future>


using namespace std;

void parallel_sum(int start, int end, promise<int> ps)
{
    int sum = 0;
    ps.set_value(sum);
    for (int i = 0; i <= end; i++)
    {
        sum += i;
    }
    ps.set_value(sum);
}

int main()
{
    promise<int> ps;
    // future<int> sum_future = ps.get_future();
    shared_future<int> sum_future = ps.get_future();
    thread th(parallel_sum, 1, 100, move(ps));
    cout << "sum = " << sum_future.get() << endl;
    cout << "sum = " << sum_future.get() << endl;
    th.join();


    return 0;
}