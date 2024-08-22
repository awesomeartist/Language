#include <iostream>
#include <stack>
#include <string>


using namespace std;



int main()
{
    system("chcp 65001");

    stack<string> str_stack;

    // 入栈，如果是复合数据结构，用 emplace 代替 push 入栈
    str_stack.push("粒粒皆辛苦");
    str_stack.push("谁之盘中餐");
    str_stack.push("汗滴禾下土");
    str_stack.push("锄禾日当午");

    string str = str_stack.top();
    str_stack.pop();
    cout << str << endl;
    str = str_stack.top();
    str_stack.pop();
    cout << str << endl;

    // 全部出栈
    while (!str_stack.empty())
    {
        string str = str_stack.top();
        str_stack.pop();
        cout << str << ", stack pop, there is " << str_stack.size() 
                    << " elements in the stack." << endl;
    }

    return 0;
}