#include <iostream>
#include <compare>
#include <limits>


using namespace std;

int main()
{
    double a = 0.0;
    double b = -0.0;

    double c = numeric_limits<double>::quiet_NaN();

    partial_ordering po = (a <=> b);
    cout << boolalpha << is_eq(po) << endl;
    cout << boolalpha << (po == partial_ordering::less) << endl;
    cout << c << endl;


    // weak_ordering wo = (a <=> b);


    strong_ordering so = (2 <=> 3);
    cout << boolalpha << is_eq(so) << endl;

    

    return 0;
}