#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;

int main()
{
    // 查找

    string str_ref = "ABBCCCDDDEEABCD";
    
    // 1) size_type find( const CharT* s, size_type pos = 0 )
    print("1) size_type find( const CharT* s, size_type pos = 0 )");
    print("str_ref", str_ref);
    print("the first pos of \"CD\" in str_ref: ", str_ref.find("CD"));
    print("the first pos of \"cd\" in str_ref: ", str_ref.find("cd"));
    print("the first pos of \"cd\" in str_ref: ", (int)(str_ref.find("cd")));
    if (string::npos == str_ref.find(("cd"))) {
        print("\"cd\" not found in str_ref");
    } else {
        print("the first pos of \"cd\" in str_ref: ", str_ref.find("cd"));
    }
    // 1) size_type find( const CharT* s, size_type pos = 0 )
    // str_ref = "ABBCCCDDDEEABCD"
    // the first pos of "CD" in str_ref:  = 5
    // the first pos of "cd" in str_ref:  = 18446744073709551615
    // the first pos of "cd" in str_ref:  = -1
    // "cd" not found in str_ref


    // 2) size_type rfind( const CharT* s, size_type pos = 0 )
    print("2) size_type find( const CharT* s, size_type pos = 0 )");
    print("str_ref", str_ref);
    print("the first pos of \"CD\" in str_ref: ", str_ref.rfind("CD"));

    // 2) size_type rfind( const CharT* s, size_type pos = 0 )
    // str_ref = "ABBCCCDDDEEABCD"
    // the last pos of "CD" in str_ref:  = 13


    // 3) size_type find_first_of( const CharT* s, size_type pos = 0 ) 
    // 寻找等于给定字符序列中字符之一的首个字符
    print("3) find_first_of( const CharT* s, size_type pos = 0 )");
    print("str_ref", str_ref);
    print("the first pos of ch  in str_ref contained by substr", str_ref.find_first_of("DC"));
    // output:
    // 3) find_first_of( const CharT* s, size_type pos = 0 )
    // str_ref = "ABBCCCDDDEEABCD"
    // the first pos of ch  in str_ref contained by substr = 3


    // 4) size_type find_last_not_of( const CharT* s, size_type pos = npos )
    // 寻找最后一个不等于给定字符序列中任何字符的字符
    print("4) find_last_not_of( const CharT* s, size_type pos = npos )");
    print("str_ref", str_ref);
    print("the last pos of ch in str_ref not contained by substr", str_ref.find_last_not_of("CD"));
    // output:
    // 4) find_last_not_of( const CharT* s, size_type pos = npos )
    // str_ref = "ABBCCCDDDEEABCD"
    // the last pos of ch in str_ref not contained by substr = 12


    return 0;
}