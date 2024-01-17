#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;

int main()
{
    // 插入与删除
    string str_ref_1 = "Hello World! ";
    string str_ref_2 = "And Hello C++ STD Library!";


    // 1) basic_string& append( const basic_string& str )
    // // 注意，因为 `append` 返回 *this，我们能一同链式调用
    print("1) append( const basic_string& str )");
    string str_res_1(str_ref_1);
    str_res_1.append(str_ref_2).append(3, 'A').append("bb");
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res_1", str_res_1);
    // output: 
    // 1) append( const basic_string& str )
    // str_ref_1 = "Hello World! "
    // str_ref_2 = "And Hello C++ STD Library!"
    // str_res_1 = "Hello World! And Hello C++ STD Library!AAAbb"


    // 2) basic_string& append( const basic_string& str,
    //              size_type pos, size_type count = npos )
    print("2) append( const basic_string& str, size_type pos, size_type count = npos )");
    string str_res_2(str_ref_1);
    str_res_2.append(str_ref_2, 3, 4);
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res_2", str_res_2);
    // output:
    // 2) append( const basic_string& str, size_type pos, size_type count = npos )
    // str_ref_1 = "Hello World! "
    // str_ref_2 = "And Hello C++ STD Library!"
    // str_res_2 = "Hello World!  Hel"


    // 3) basic_string& append( InputIt first, InputIt last )
    print("3) append( InputIt first, InputIt last )");
    string str_res_3(str_ref_1);
    str_res_3.append(str_ref_2.begin(), str_ref_2.begin()+3);
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res_3", str_res_3);
    // output: 
    // 3) append( InputIt first, InputIt last )
    // str_ref_1 = "Hello World! "
    // str_ref_2 = "And Hello C++ STD Library!"
    // str_res_3 = "Hello World! And"


    // 4) insert( iterator pos, size_type count, CharT ch )
    print("4) insert( iterator pos, size_type count, CharT ch )");
    string str_res_4(str_ref_1);
    str_res_4.insert(str_res_4.end(), 2, 'z');
    print("str_ref_1", str_ref_1);
    print("str_res_4", str_res_4);
    // output: 
    // 4) insert( iterator pos, size_type count, CharT ch )
    // str_ref_1 = "Hello World! "
    // str_res_4 = "Hello World! zz"


    // 5) basic_string& insert( par ) 可链式调用
    print("5) basic_string& insert()");
    string str_res_5(str_ref_1);
    str_res_5.insert(str_res_5.size(), str_ref_2, 0, str_ref_2.size()).insert(5, " Nice").insert(0, 2, 'A');
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res_5", str_res_5);
    // output: 
    // 5) basic_string& insert()
    // str_ref_1 = "Hello World! "
    // str_ref_2 = "And Hello C++ STD Library!"
    // str_res_5 = "AAHello Nice World! And Hello C++ STD Library!"


    // 6) insert( iterator pos, InputIt first, InputIt last )
    print("6) insert( iterator pos, InputIt first, InputIt last )");
    string str_res_6(str_ref_1);
    str_res_6.insert(str_res_6.end(), str_ref_2.begin()+3, str_ref_2.end());
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res_6", str_res_6);
    // output: 
    // 6) insert( iterator pos, InputIt first, InputIt last )
    // str_ref_1 = "Hello World! "
    // str_ref_2 = "And Hello C++ STD Library!"
    // str_res_6 = "Hello World!  Hello C++ STD Library!"



    // 7) void push_back( CharT ch )
    print("7) push_back( CharT ch )");
    string str_res_7(str_ref_1);
    str_res_7.push_back('A');
    print("str_ref_1", str_ref_1);
    print("str_res_7", str_res_7);
    // output: 
    // 7) push_back( CharT ch )
    // str_ref_1 = "Hello World! "
    // str_res_7 = "Hello World! A"


    // 8) void push_back( CharT ch )
    print("8) pop_back( CharT ch )");
    string str_res_8(str_ref_1);
    str_res_8.pop_back();
    print("str_ref_1", str_ref_1);
    print("str_res_8", str_res_8);
    // output:
    // 8) pop_back( CharT ch )
    // str_ref_1 = "Hello World! "
    // str_res_8 = "Hello World!"


    // 9) basic_string& erase( size_type index = 0, size_type count = npos )
    print("9) erase( size_type index = 0, size_type count = npos )");
    string str_res_9(str_ref_1);
    str_res_9.erase(2, 2);
    print("str_ref_1", str_ref_1);
    print("str_res_9", str_res_9);
    // output:
    // 9) erase( size_type index = 0, size_type count = npos )
    // str_ref_1 = "Hello World! "
    // str_res_9 = "Heo World! "


    // 10) iterator erase( iterator position )
    print("10) iterator erase( iterator position )");
    string str_res_10(str_ref_1);
    str_res_10.erase(str_res_10.begin());
    print("str_ref_1", str_ref_1);
    print("str_res_10", str_res_10);
    // output:
    // 10) iterator erase( iterator position )
    // str_ref_1 = "Hello World! "
    // str_res_10 = "ello World! "


    // 11) iterator erase( iterator first, iterator last )
    print("11) iterator erase( iterator first, iterator last )");
    string str_res_11(str_ref_1);
    str_res_11.erase(str_res_11.begin(), str_res_11.begin()+5);
    print("str_ref_1", str_ref_1);
    print("str_res_11", str_res_11);
    // output:
    // 11) iterator erase( iterator first, iterator last )
    // str_ref_1 = "Hello World! "
    // str_res_11 = " World! "


    // 12) erase()
    print("12) erase()");
    string str_res_12(str_ref_1);
    str_res_12.erase();
    print("str_ref_1", str_ref_1);
    print("str_res_12", str_res_12);
    // output:
    // 12) erase()
    // str_ref_1 = "Hello World! "
    // str_res_12 = ""


    // 13) void clear()
    print("13) clear()");
    string str_res_13(str_ref_1);
    str_res_13.erase();
    print("str_ref_1", str_ref_1);
    print("str_res_13", str_res_13);
    // output:
    // 13) clear()
    // str_ref_1 = "Hello World! "
    // str_res_13 = ""

    return 0;
} 






        
