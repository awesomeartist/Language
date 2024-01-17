#include <iostream>

using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
        // 构造函数，在创造实际对象是运行
        Car(string x, string y, int z);
};
Car::Car(string x, string y, int z){
    brand = x;
    model = y;
    year = z;
}

int main(void)
{
    // 实例化一个 Car 类
    Car carObj1("BMW", "XS", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

    return 0;
}