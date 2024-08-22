#include <iostream>
#include <queue>
#include <string>


using namespace std;



int main()
{
    queue<string> str_queue;

    // 入队，如果是复合数据结构，用 emplace 代替 push 入队
    str_queue.push("Tom");
    str_queue.push("Jerry");
    str_queue.push("Spike");
    str_queue.push("Tyke");

    string str = str_queue.front();
    str_queue.pop();
    cout << str << endl;
    str = str_queue.front();
    str_queue.pop();
    cout << str << endl;

    // 全部出队
    while (!str_queue.empty())
    {
        string str = str_queue.front();
        str_queue.pop();
        cout << str << ", queue pop, there is " << str_queue.size() 
                    << " elements in the queue." << endl;
    }

    return 0;
}