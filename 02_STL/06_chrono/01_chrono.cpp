// C++23

#include <iostream>
#include <string>
#include <chrono>

using namespace std;

int main()
{
    // 模板类，system clock为 1970 年至今时间，类型为 ns
    chrono::time_point<chrono::system_clock, chrono::nanoseconds> t1 =
        chrono::system_clock::now();
    cout << t1 << endl;
    cout << t1.time_since_epoch() << endl;

    // 简写
    chrono::system_clock::time_point t2 = chrono::system_clock::now();
    // 转为 s
    chrono::time_point<chrono::system_clock, chrono::seconds> t3 =
        chrono::time_point_cast<chrono::seconds>(t2);
    cout << t3.time_since_epoch() << endl;


    // 计时，系统开机开始计时
    chrono::steady_clock::time_point t4 = chrono::steady_clock::now();
    cout << t4.time_since_epoch() << endl;
    chrono::steady_clock::time_point t5 = chrono::steady_clock::now();
    cout << (t5 - t4) << endl;
    



    return 0;
}