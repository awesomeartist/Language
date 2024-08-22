#include <iostream>
#include <queue>
#include <string>

using namespace std;

class Person
{
private:
    int age;
    string name;

public:
    Person() : Person(0, "") {}
    Person(const int age, const string name) : age(age), name(name) {}

    int GetAge() const
    {
        return age;
    }
    friend ostream& operator << (ostream& out, const Person& person);
    friend bool operator < (const Person &p1, const Person &p2);
};

ostream& operator << (ostream& out, const Person& person)
{
    return out << "{" << "name: " << person.name
                << ", age: " << person.age << "}";
}
// 自定义类型比较器
bool operator < (const Person &p1, const Person &p2)
{
    // return p1.GetAge() < p2.GetAge();
    return p1.age < p2.age;
}

int main()
{
    // 1) 基本数据类型
#if false

    // priority_queue<int> q;
    priority_queue<int, vector<int>, greater<int>> q;

    q.push(10);
    q.push(30);
    q.push(20);

    // 出队
    while (!q.empty())
    {
        auto top = q.top();
        q.pop();
        cout << top << '\t';
    }

    // output:
    // 30    20    10
    // or
    // 10    20    30

#endif

    // 2) 自定义类型
#if true

    priority_queue<Person> q;

    q.emplace(18, "Jerry");
    q.emplace(22, "Spike");
    q.emplace(20, "Tom");

    // 出队
    while (!q.empty())
    {
        auto top = q.top();
        q.pop();
        cout << top << '\t';
    }

    // output:
    // {name: Spike, age: 22}  {name: Tom, age: 20}    {name: Jerry, age: 18}

#endif


    return 0;
}