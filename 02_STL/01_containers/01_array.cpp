#include <iostream>
#include <array>
#include <string>
#include "00_class.h"

using namespace std;

int main()
{
    array<int, 5> ar = {1, 2, 3, 4, 5};
    cout << ar[2] << endl;
    cout << ar.at(3) << endl;
    ar.fill(11);

    for (auto &n : ar) {
        cout << n << '\t';
    }
    cout << endl;


    array<int, 5>::iterator it_int = ar.begin(); // auto it_int = ar.begin();

    for (; it_int != ar.end(); it_int++) {
        cout << *it_int << '\t';
    }
    cout << endl;

    array<User, 5> arr = {User("Tom", 18), User("Jerry", 20), User("Lee", 22)};
    // arr[0].set("Tom", 18);

    array<User, 5>::iterator it_user = arr.begin(); // auto it_user = arr.begin();

    for (; it_user != arr.end(); it_user++) {
        it_user->SayHello();
        cout << endl;
    }
    return 0;
}