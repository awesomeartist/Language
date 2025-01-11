#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>


using namespace std;

void parallel_sum(int start, int end, int &sum)
{
    sum = 0;
    for (int i = 0; i <= end; i++)
    {
        sum += i;
    }
}

int main()
{
    int sum;
    thread th(parallel_sum, 1, 100, ref(sum));
    
    th.join();
    cout << sum << endl; 


    return 0;
}