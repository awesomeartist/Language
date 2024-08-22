#include <iostream>
#include <array>
#include <string>


using namespace std;


class User {

private:
    std::string user_name;
    int age;
  
public:
    User() : user_name(""), age(0) {}                     // 无参构造函数

    User(const std::string& user_name, const int& age)    // 两参构造函数
        : user_name(user_name), age(age) {}

    void set(const std::string& username, const int& age) 
    {
        this->user_name = username;
        this->age = age;
    }

    void SayHello() 
    {
        std::cout << "Hello, My name is " << user_name << std::endl
        << "And I'm " << age << " years old." << std::endl;
    }
};


int main()
{

    // 1) 模板创建基本数据类型的 array 容器并访问
#if false

    array<int, 5> ar = {1, 2, 3, 4, 5};

    cout << "array ar :" << endl;
    for (auto &n : ar) {
        cout << n << '\t';
    } 
    cout << endl;

    // 不做边界检查
    cout << "ar[2] = " << ar[2] << endl; 

    // reference at( size_type pos );
    cout << "ar.at(3) = " << ar.at(3) << endl;

    // void fill( const T& value ); 将指定 value 赋值给容器中所有元素
    ar.fill(11);
    cout << "array ar after operation fill(11): " << endl;
    array<int, 5>::iterator it = ar.begin();
    for (; it != ar.end(); it++) {
        cout << *it << '\t';
    }
    cout << endl;

    // output:
    // array ar :
    // 1       2       3       4       5
    // ar[2] = 3
    // ar.at(3) = 4
    // array ar after operation fill(11):
    // 11      11      11      11      11

#endif


    // 2) 模板创建自定义类型的 array 容器并访问
#if true

    array<User, 5> arr = {User("Tom", 18), User("Jerry", 20)};
    arr[2].set("Spike", 18);

    // auto it = arr.begin();
    array<User, 5>::iterator it = arr.begin(); 

    for (; it != arr.end(); it++) {
        it->SayHello();
        cout << endl;
    }

    // output:
    // Hello, My name is Tom
    // And I'm 18 years old.

    // Hello, My name is Jerry
    // And I'm 20 years old.

    // Hello, My name is Spike
    // And I'm 18 years old.

    // Hello, My name is
    // And I'm 0 years old.

    // Hello, My name is
    // And I'm 0 years old.

#endif

    return 0;
}