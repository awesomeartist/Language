#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    bitset<8> bst1("1010111");
    bitset<8> bst2(121u);

    cout << "bst1 = " << bst1 << endl;
    cout << "bst2 = " << bst2 << endl;

    
#if false

    cout << "bst1[3] = " << bst1[3] << endl;
    bst1.set(3);
    cout << "bst1[3] = " << bst1[3] << endl;
    bst1.reset(3);
    cout << "bst1[3] = " << bst1[3] << endl;
    cout << boolalpha << bst1.test(3) << endl;

#endif


#if false

    cout << boolalpha;
    cout << "bst1.any() = " << bst1.any() << endl;
    cout << "bst2.none() = " << bst2.none() << endl;
    cout << "bst1.cout() = " << bst1.count() << endl;
    cout << "bst1.size() = " << bst1.size() << endl;

#endif


#if false
    
    cout << "flip bst2" << endl;
    cout << "bst2 = " << bst2.flip() << endl;
    cout << "bst2.to_string()" << endl;
    cout << "bst2 = " << bst2.to_string() << endl;
    cout << "bst1.to_ulong()" << endl;
    cout << "bst1 = " << bst1.to_ullong() << endl;

#endif


#if true

    cout << "(bst1 & bst2) = " << (bst1 & bst2) << endl;
    cout << "(bst1 | bst2) = " << (bst1 | bst2) << endl;
    cout << "(bst1 ^ bst2) = " << (bst1 ^ bst2) << endl;
    cout << "~bst2 = " << ~bst2 << endl;
    cout << "bst2 << 2 = " << (bst2 << 2) << endl;

#endif
    return 0;
}