#include <iostream>
#include <random>


using namespace std;


int main()
{
    random_device rd;
    cout << rd() << endl;
    cout << rd()%100 << endl;

    // 1) 随机数生成器
    default_random_engine re(rd());

    // 2) 随机数分布
    uniform_int_distribution<int> dis(10, 30);
    bernoulli_distribution bdis(0.5);

    // 3) 生成随机数
    cout << bdis(re) << endl;
    cout << bdis(re) << endl;
    cout << bdis(re) << endl;


}