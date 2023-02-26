#include <iostream>

using namespace std;

class Car {
    public:
        int speed(int maxSpeed);
        void myMethod(){
            cout <<"Hello World!" <<endl;
        }
};
// 外部实现类的方法；
int Car::speed(int maxSpeed){
    return maxSpeed;
}
int main(void)
{
    // 实例化一个 Car 类
    Car myObj;
    cout <<"maxSpeed:" <<myObj.speed(200) <<endl;
    myObj.myMethod();


    return 0;
}