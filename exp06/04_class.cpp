#include <iostream>

using namespace std;

class MyClass {

    //默认私有
    int num;
    public:
        int x;
        int y;
    private:
    int z;
};

int main(void)
{
    // 实例化一个 Car 类
    MyClass myObj;
    myObj.x = 25;
    myObj.num = 50; //不允许访问
    myObj.z = 30;


    return 0;
}