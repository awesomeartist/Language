#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;

int main()
{
    // 替换/子串
    string str_ref_1 = "Hello World!";
    string str_ref_2 = "替换/字串";
    string str_ref_3 = "Hello CPP!";

    
    system("chcp 65001");

    
    // 1) basic_string& replace( size_type pos, size_type count,
    //                          const basic_string& str )
    print("1) replace(size_type pos, size_type count, const basic_string& str)");
    string str_res_1(str_ref_1);
    str_res_1.replace(2, 5, str_ref_2);
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res_1", str_res_1);
    // output:
    // 1) replace(size_type pos, size_type count, const basic_string& str)
    // str_ref_1 = "Hello World!"
    // str_ref_2 = "替换/字串"
    // str_res_1 = "He替换/字串orld!"
    

    // 2) replace( size_type pos, size_type count, const basic_string& str,
    //          size_type pos2, size_type count2 = npos );
    print("2) replace( par )");
    string str_res_2(str_ref_1);
    str_res_2.replace(6, 10, str_ref_2, 3, 7);
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res_2", str_res_2);
    // 2) replace( par )
    // str_ref_1 = "Hello World!"
    // str_ref_2 = "替换/字串"
    // str_res_2 = "Hello 换/字"


    //3) basic_string& replace( const_iterator first, const_iterator last,
    //                          InputIt first2, InputIt last2 )
    print("3) replace( par )");
    string str_res_3(str_ref_1);
    str_res_3.replace(str_res_3.begin()+6, str_res_3.end(),
                        str_ref_3.begin()+6, str_ref_3.end());
    print("str_ref_1", str_ref_1);
    print("str_ref_3", str_ref_3);
    print("str_res_3", str_res_3);
    // output: 
    // 3) replace( par )
    // str_ref_1 = "Hello World!"
    // str_ref_3 = "Hello CPP!"
    // str_res_3 = "Hello CPP!"


    // 4) basic_string& replace( size_type pos, size_type count,
    //                           const CharT* cstr, size_type count2 );
    print("4) replace( par )");
    string str_res_4(str_ref_1); 
    str_res_4.replace(6, 10, "C++!", 15);
    print("str_ref_1", str_ref_1);
    print("str_res_4", str_res_4);
    // output:
    // 4) replace( par )
    // str_ref_1 = "Hello World!"
    // str_res_4 = "Hello C++!str_res_4"
    // 索引溢出，字符串常量 "str_res_4" 在实际的内存中跟在 "C++!" 后面


    // 5) basic_string& replace( size_type pos, size_type count,
    //                          size_type count2, CharT ch )
    print("5) replace( par )");
    string str_res_5(str_ref_1);
    str_res_5.replace(5, 1, 5, 'Z');
    print("str_ref_1", str_ref_1);
    print("str_res_5", str_res_5);
    // output: 
    // 5) replace( par )
    // str_ref_1 = "Hello World!"
    // str_res_5 = "HelloZZZZZWorld!" 


    // 6) basic_string substr( size_type pos = 0, size_type count = npos )
    print("6) substr( size_type pos = 0, size_type count = npos )");
    string str_res_6 = str_ref_1.substr(0, 5);
    print("str_ref_1", str_ref_1);
    print("str_res_6", str_res_6);
    // output:
    // 6) substr( size_type pos = 0, size_type count = npos )
    // str_ref_1 = "Hello World!"
    // str_res_6 = "Hello"


    return 0;
}