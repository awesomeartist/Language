#include <iostream>
#include <string>
#include <stdint.h>
#include <typeinfo>
#include "00_string.hpp"

using namespace std;

int main()
{
    // 其他操作
    uint64_t num_ref = 2333114514;
    string str_ref_1 = "128cd25";
    string str_ref_2 = "123.456f";
    
    // 1) std::string to_string( int value )
    print("1) string to_string( int value )");
    print("num_ref", num_ref);
    print("num_ref to string ", to_string(num_ref));
    // output:
    // 1) string to_string( int value )
    // num_ref = 2333114514
    // num_ref to string  = "2333114514"


    // 2) int stoi ( const std::string& str, std::size_t* pos = nullptr, int base = 10 );
    print("2) stoi(const std::string& str, std::size_t* pos = nullptr, int base = 10)");
    print("str_ref_1", str_ref_1);
    size_t pos;
    print("str_ref_1 to int", stoi(str_ref_1, &pos, 8));
    print("the pos of first ch in str_ref_1 not transferred", pos);
    // print("typeid of stoi(str_ref_1)", typeid(stoi(str_ref_1)).name());
    cout << "typeid of stoi(str_ref_1) :" << typeid(stoi(str_ref_1)).name() << endl;
    // output:
    // 2) stoi(const std::string& str, std::size_t* pos = nullptr, int base = 10)
    // str_ref_1 = "128cd25"
    // str_ref_1 to int = 10
    // the pos of first ch in str_ref_1 not transferred = 2
    // typeid of stoi(str_ref_1) :i    


    // 3) float stof ( const std::string& str, std::size_t* pos = nullptr );
    print("2) stof(const std::string& str, std::size_t* pos = nullptr)");
    print("str_ref_2", str_ref_2);
    print("str_ref_2 to float", stof(str_ref_2, &pos));
    print("the pos of first ch in str_ref_1 not transferred", pos);
    cout << "typeid of stoi(str_ref_1) :" << typeid(stof(str_ref_2)).name() << endl;
    // output:
    // 2) stof(const std::string& str, std::size_t* pos = nullptr)
    // str_ref_1 = "123.456f"
    // str_ref_1 to flat = 10
    // the pos of first ch in str_ref_1 not transferred = 7
    // typeid of stoi(str_ref_1) :f


    // 3) struct hash<std::basic_string<char, std::char_traits<char>, A>>
    print("3) hash()");
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("hash value of str_ref_1", hash<std::string_view>{}(str_ref_1));
    hash<string> hs;
    print("hash value of str_ref_2", hs(str_ref_2));
    // output:
    // 3) hash()
    // str_ref_1 = "128cd25"
    // str_ref_2 = "123.456f"
    // hash value of str_ref_1 = 14167585079038610828
    // hash value of str_ref_2 = 10637078999152795202

    return 0;
}