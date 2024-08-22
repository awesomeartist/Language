#include <iostream>
#include <string>
#include <deque>

using namespace std;


int main()
{
    deque<string> str_deque;

    // 入队，如果是复合数据结构，用 emplace 代替 push 入队
    str_deque.push_front("Tom");
    str_deque.push_back("Jerry");
    str_deque.push_front("Spike");
    str_deque.push_back("Tyke");

    string str = str_deque.back();
    str_deque.pop_back();
    cout << str << endl;
    str = str_deque.front();
    str_deque.pop_front();
    cout << str << endl;

    // 全部出队
    while (!str_deque.empty())
    {
        string str = str_deque.front();
        str_deque.pop_front();
        cout << str << ", deque pop, there is " << str_deque.size() 
                    << " elements in the deque." << endl;
    }



    return 0;
}