#include <iostream>
#include <vector>
#include <string>

using namespace std;


class User
{
private:
    int id;
    string name;
    int age;

public:
    User() : id(-1), name(""), age(0) {cout << "无参构造" << endl;}

    User(const int id, const string& name, const int age) 
        : id(id), name(name), age(age)
    {
        cout << "id = " << id << "对象三参构造" << endl;
    }

    User(const User& user)
        : id(user.id), name(user.name), age(user.age) 
    {
        cout << "id = " << id << "对象拷贝" << endl; 
    }

    User(const User&& user)
        : id(move(user.id)), name(move(user.name)), age(move(user.age))
    {
        cout << "id = " << id << "对象移动" << endl; 
    }

    User& operator = (const User&& user)
    {
        id = move(user.id);
        age = move(user.age);
        name = move(user.name);
        
        cout << "id" << id << "对象被移动赋值" << endl;
        
        return *this;
    } 
};


int main() 
{
    system("chcp 65001");

    // 1) 无参构造
#if false
    
    vector<int> vec;

    cout << "vec.size() = " << vec.size() << endl;
    cout << "vec.capacity() = " << vec.capacity() << endl;

    vector<int>::iterator it = vec.begin();
    cout << "vector vec:" << endl;
    for(;it != vec.end(); it++)
    {
        cout << *it << '\t';
    }

    // output:
    // vec.size() = 0
    // vec.capacity() = 0
    // vector vec:

#endif


    // 2) 分配指定容量
#if false
    
    vector<int> vec;
    vec.reserve(10);

    cout << "vec.size() = " << vec.size() << endl;
    cout << "vec.capacity() = " << vec.capacity() << endl;

    vector<int>::iterator it = vec.begin();
    cout << "vector vec:" << endl;
    for(;it != vec.end(); it++)
    {
        cout << *it << '\t';
    }

    // output:
    // vec.size() = 0
    // vec.capacity() = 10
    // vector vec:
#endif


    // 3) 分配指定容量并初始化
#if false
    
    // vector<int> vec(10); // 默认分配 0
    vector<int> vec(10, 100);

    cout << "vec.size() = " << vec.size() << endl;
    cout << "vec.capacity() = " << vec.capacity() << endl;

    vector<int>::iterator it = vec.begin();
    cout << "vector vec:" << endl;
    for(;it != vec.end(); it++)
    {
        cout << *it << '\t';
    }

    // output:
    // vec.size() = 10
    // vec.capacity() = 10
    // vector vec:
    // 100     100     100     100     100     100     100     100     100     100

#endif 

    // 4) void emplace_back( Args&&... args );
    // 节省构造后移动的步骤
#if false

    vector<int> vec;

    vec.push_back(11);
    cout << (uintptr_t)vec.data() << endl;
    vec.push_back(12);
    cout << (uintptr_t)vec.data() << endl;
    
    cout << "vec.size() = " << vec.size() << endl;
    cout << "vec.capacity() = " << vec.capacity() << endl;

    // output:
    // 1952055960592
    // 1952055976368
    // vec.size() = 2
    // vec.capacity() = 2

#endif

#if true

    vector<User> vec;

    vec.emplace_back(1, "Tom", 18);

    vec.emplace_back(2, "Jerry", 20);

    vec.push_back(User(3, "Spike", 22));

    // output:
    // id = 1对象三参构造
    // id = 2对象三参构造
    // id = 1对象拷贝
    // id = 3对象三参构造
    // id = 3对象移动
    // id = 1对象拷贝
    // id = 2对象拷贝

#endif

    return 0;
}