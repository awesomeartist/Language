#include <iostream>
#include <functional>

using namespace std;


int sum(int a, int b)
{
    return a + b;
}

int main()
{
#if false

    function<int(int, int)> f(sum);
    cout << f(100, 200) << endl;

#endif

#if false
    auto f = bind(sum, 100, 200);
    cout << f() << endl;

#endif

#if true

    auto f = bind(sum, 100, std::placeholders::_1);
    cout << f(15) << endl;

#endif
    return 0;
}