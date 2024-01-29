#include <iostream>

using namespace std;

// 使用类方法修改和访问类的私有成员
class Employee {
    private:
        int salary;

    public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
};

int main(void)
{
    // 实例化一个类
    Employee myObj;
    myObj.setSalary(30000);
    cout << "my salary is:" << myObj.getSalary() << endl;


    return 0;
}