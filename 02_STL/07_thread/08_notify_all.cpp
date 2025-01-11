#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;

class PrintChar
{
private:
    int loop_num;
    int index;
    mutex mtx;
    condition_variable cv;
public:
    PrintChar(int loop_num) : loop_num(loop_num), index(0) {}
    void A()
    {
        for (int i = 0; i < loop_num; i++)
        {
            unique_lock<mutex> ulk(mtx);
            cv.wait(ulk, [&] {return index%3 == 0;});
            cout << "A";
            this_thread::sleep_for(chrono::milliseconds(100));
            index ++;
            cv.notify_all();
        }
    }
    void B()
    {
        for (int i = 0; i < loop_num; i++)
        {
            unique_lock<mutex> ulk(mtx);
            cv.wait(ulk, [&] {return index%3 == 1;});
            cout << "B";
            this_thread::sleep_for(chrono::milliseconds(100));
            index ++;
            cv.notify_all();
        }
    }
    void C()
    {
        for (int i = 0; i < loop_num; i++)
        {
            unique_lock<mutex> ulk(mtx);
            cv.wait(ulk, [&] {return index%3 == 2;});
            cout << "C";
            this_thread::sleep_for(chrono::milliseconds(100));
            index ++;
            cv.notify_all();
        }
    }
};

int main()
{
    int num = 0;
    cout << "input a number of loop times: " ;
    cin >> num;

    PrintChar p(num);
    thread th1(&PrintChar::A, &p);
    thread th2(&PrintChar::B, &p);
    thread th3(&PrintChar::C, &p);

    th1.join();
    th2.join();
    th3.join();

    return 0;
}