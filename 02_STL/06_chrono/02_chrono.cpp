#include <iostream>
#include <string>
#include <chrono>
#include <ratio>
#include <thread>

using namespace std;
using namespace std::literals::chrono_literals;



int main()
{
    chrono::steady_clock::time_point t1 = chrono::steady_clock::now();
    cout << t1.time_since_epoch() << endl;
    chrono::steady_clock::time_point t2 = chrono::steady_clock::now();
    cout << t2.time_since_epoch() << endl;

    // 构造时间周期 
#if false

    // chrono::duration<int, ratio<60>> d(10);
    // chrono::milliseconds d(100);
    chrono::duration<int, ratio<1, 1000>> d(100);
    cout << d << endl;
    cout << d.count() << endl;

#endif



#if false

    // chrono::nanoseconds d = t1.time_since_epoch();
    // chrono::duration<double> d = t2 - t1;
    chrono ::nanoseconds d = t2 - t1;
    // chrono::seconds d = chrono::duration_cast<chrono::seconds>(t2 - t1);
    cout << d << endl;
    cout << d.count() << endl;
    t1 += d;
    cout << t1.time_since_epoch() << endl;

#endif

    cout << "start" << endl;
    // this_thread::sleep_for(chrono::seconds(2));
    this_thread::sleep_for(2s);
    cout << "end" << endl;


#if true



#endif

    return 0;
}