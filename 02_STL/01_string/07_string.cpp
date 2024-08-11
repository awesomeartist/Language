#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;

int main()
{
    // 替换/子串
    string str_ref("Hello World!");
    string str_ref_1 = "Hello World!";
    string str_ref_2 = "替换/字串";
    string str_ref_3 = "Hello CPP!";

    system("chcp 65001");

/*  
    1) basic_string& replace( size_type pos, size_type count,
                            const basic_string& str )
*/
#if false

    string str_res(str_ref_1);
    str_res.replace(2, 5, str_ref_2);
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res", str_res);

    // output:
    // str_ref_1 = "Hello World!"
    // str_ref_2 = "替换/字串"
    // str_res = "He替换/字串orld!"
    
#endif


/*
    2) basic_string& replace( size_type pos, size_type count, const basic_string& str,
                            size_type pos2, size_type count2 = npos )
*/
#if false

    string str_res(str_ref_1);
    str_res.replace(6, 10, str_ref_2, 3, 7);
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res", str_res);
    
    // output:
    // str_ref_1 = "Hello World!"
    // str_ref_2 = "替换/字串"
    // str_res = "Hello 换/字"

#endif


/*
    3) basic_string& replace( const_iterator first, const_iterator last,
                            InputIt first2, InputIt last2 )
*/
#if false

    string str_res(str_ref_1);
    str_res.replace(str_res.begin()+6, str_res.end(),
                        str_ref_3.begin()+6, str_ref_3.end());
    print("str_ref_1", str_ref_1);
    print("str_ref_3", str_ref_3);
    print("str_res", str_res);

    // output: 
    // str_ref_1 = "Hello World!"
    // str_ref_3 = "Hello CPP!"
    // str_res = "Hello CPP!"
    
#endif

/*
    4) basic_string& replace( size_type pos, size_type count,
                            const CharT* cstr, size_type count2 );
*/
#if false

    string str_res(str_ref); 
    str_res.replace(6, 10, "C++!", 15);
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output:
    // str_ref = "Hello World!"
    // str_res = "Hello C++!str_refst"
    // 索引溢出，字符串常量 "str_res" 在实际的内存中跟在 "C++!" 后面
    
#endif


/*
    5) basic_string& replace( size_type pos, size_type count,
                            size_type count2, CharT ch )
*/
#if false

    string str_res(str_ref);
    str_res.replace(5, 1, 5, 'Z');
    print("str_ref", str_ref);
    print("str_res", str_res);
    
    // output: 
    // str_ref = "Hello World!"
    // str_res = "HelloZZZZZWorld!" 
 
#endif


    // 6) basic_string substr( size_type pos = 0, size_type count = npos )
#if true

    string str_res = str_ref.substr(0, 5);
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output:
    // str_ref = "Hello World!"
    // str_res = "Hello"

#endif


    return 0;
}