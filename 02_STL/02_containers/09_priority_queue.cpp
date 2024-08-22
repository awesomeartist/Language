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

// 1) 重载实现自定义类型比较器
bool operator < (const Person &p1, const Person &p2)
{
    // return p1.GetAge() < p2.GetAge();
    return p1.age < p2.age;
}

// 2) 模仿 less 定义比较器
struct Comp1
    {
        bool operator () (const Person& p1, const Person& p2) const
        { return p1.GetAge() < p2.GetAge();}
    };

// 3) 定义普通比较函数
bool Comp2(const Person& p1, const Person& p2)
{
    return p1.GetAge() < p2.GetAge();
}

int main()
{   
    // 1)
    // priority_queue<Person> q;

    // 2)
    // priority_queue<Person, vector<Person>, Comp> q;

    // 3)
    // priority_queue<Person, vector<Person>, bool (*)(const Person& p1, const Person& p2)> q;

    // 4) 通过 lambda 表达式定义比较函数
    auto Comp3 = [](const Person& p1, const Person& p2) {
    return p1.GetAge() < p2.GetAge();
    };

    priority_queue<Person, vector<Person>, decltype(Comp3)> q(Comp3);


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


    return 0;
}