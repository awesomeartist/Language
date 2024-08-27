#include <iostream>
#include <array>
#include <string>
#include <memory>


using namespace std;


class User
{
private:
    int id;
    string name;
    int age;

public:
    ~User(){cout << "析构" << endl;}
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
    void SayHello() 
    {
        std::cout << "Hello, My name is " << name << std::endl
        << "And I'm " << age << " years old." << std::endl;
    } 
};

void func(const unique_ptr<User[]> &uls, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        uls[i].SayHello();
    }
}

int main()
{

    // 1) 智能指针
#if false

    // int *ptr = new int;
    // unique_ptr<int> p(ptr);

    // *p = 10;
    // cout << *p << endl;


    shared_ptr<User> p(new User(1, "Tom", 18));
    p->SayHello();

    User* u = new User;
    delete u;

#endif


    // 2) make_unique
#if false

    // unique_ptr<int> p = make_unique<int>(1000);
    // cout << *p << endl;

    // unique_ptr<User> p = make_unique<User>(1, "Tom", 18);
    // p->SayHello();

    unique_ptr<User[]> p = make_unique<User[]>(5);
    p[1].SayHello();

#endif

    // 3) unique_ptr 内容传递要使用引用方式
    unique_ptr<User[]> p = make_unique<User[]>(5);
    func(p, 5);



    // 4) shared_ptr



    return 0;
}