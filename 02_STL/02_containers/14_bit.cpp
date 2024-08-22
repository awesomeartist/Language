#include <iostream>
#include <bit>
#include <bitset>
#include <cstdint>

using namespace std;


int main()
{
    // 0x2FAB3620
    // 小端 2F AB 36 20
    // 大端 20 36 AB 2F

    cout << boolalpha << (endian::native == endian::big) << endl;
    cout << boolalpha << (endian::native == endian::little) << endl;

#if false

    int x = 0x2FAB3620;
    uint8_t *p = (uint8_t *)&x;
    cout << hex;
    cout << (uintptr_t)(p+0) << ": " << (uint16_t)*(p+0) << endl;
    cout << (uintptr_t)(p+1) << ": " << (uint16_t)*(p+1) << endl;
    cout << (uintptr_t)(p+2) << ": " << (uint16_t)*(p+2) << endl;
    cout << (uintptr_t)(p+3) << ": " << (uint16_t)*(p+3) << endl;

#endif


#if false

    uint8_t c = 121u;
    cout << (uint16_t)bit_floor(c) << endl;
    cout << bitset<8>(c) << endl;
    c = rotl(c, 2);
    cout << bitset<8>(c) << endl;

#endif 


#if true

    float f1 = 1024513;

    int I1 = f1;

    cout << bitset<32>(I1) << endl;
    int I2 = bit_cast<int, float>(f1);
    cout << I2 << endl;
    cout << bitset<32>(I2) << endl;

    int *p = (int *)&f1;
    cout << *p << endl;

#endif

    return 0;
}