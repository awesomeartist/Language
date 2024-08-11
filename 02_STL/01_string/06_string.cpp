#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;

int main()
{
    // 插入与删除
    string str_ref("Hello World!");
    string str_ref_1 = "Hello World! ";
    string str_ref_2 = "And Hello C++ STD Library!";

/*
    1) basic_string& append( const basic_string& str )
    注意，因为 `append` 返回 *this，我们能一同链式调用
*/
#if false

    string str_res(str_ref_1);
    str_res.append(str_ref_2).append(3, 'A').append("bb");
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res", str_res);

    // output: 
    // str_ref_1 = "Hello World! "
    // str_ref_2 = "And Hello C++ STD Library!"
    // str_res = "Hello World! And Hello C++ STD Library!AAAbb"

#endif


/*
    2) basic_string& append(const basic_string& str, 
                            size_type pos, size_type count = npos )
*/
#if false

    string str_res(str_ref_1);
    str_res.append(str_ref_2, 3, 6);
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res", str_res);

    // output:
    // str_ref_1 = "Hello World! "
    // str_ref_2 = "And Hello C++ STD Library!"
    // str_res = "Hello World!  Hel"

#endif



    // 3) basic_string& append( InputIt first, InputIt last )
#if false
    
    string str_res(str_ref_1);
    str_res.append(str_ref_2.begin(), str_ref_2.begin()+3);
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res", str_res);

    // output: 
    // str_ref_1 = "Hello World! "
    // str_ref_2 = "And Hello C++ STD Library!"
    // str_res = "Hello World! And"

#endif


/*
    4) insert(iterator pos, size_type count, CharT ch)
    可链式调用
*/
#if false

    string str_res(str_ref);
    str_res.insert(str_res.end(), 2, 'z');
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output: 
    // str_ref = "Hello World! "
    // str_res = "Hello World! zz"

#endif


    // 5) basic_string& insert(par) 
#if false

    string str_res(str_ref_1);
    str_res.insert(str_res.size(), str_ref_2, 0, str_ref_2.size()).insert(5, " Nice").insert(0, 2, 'A');
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res", str_res);

    // output: 
    // str_ref_1 = "Hello World! "
    // str_ref_2 = "And Hello C++ STD Library!"
    // str_res = "AAHello Nice World! And Hello C++ STD Library!"

#endif


    // 6) insert( iterator pos, InputIt first, InputIt last )
#if false

    string str_res(str_ref_1);
    str_res.insert(str_res.end(), str_ref_2.begin()+3, str_ref_2.end());
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_res", str_res);

    // output: 
    // str_ref_1 = "Hello World! "
    // str_ref_2 = "And Hello C++ STD Library!"
    // str_res = "Hello World!  Hello C++ STD Library!"

#endif


    // 7) void push_back( CharT ch )
#if false

    string str_res(str_ref);
    str_res.push_back('A');
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output: 
    // str_ref = "Hello World! "
    // str_res = "Hello World!A"

#endif


    // 8) void push_back( CharT ch )
#if false
    
    string str_res(str_ref);
    str_res.pop_back();
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output:
    // str_ref = "Hello World!"
    // str_res = "Hello World"

#endif

    // 9) basic_string& erase( size_type index = 0, size_type count = npos )
#if false

    string str_res(str_ref);
    str_res.erase(2, 2);
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output:
    // str_ref = "Hello World! "
    // str_res = "Heo World! "

#endif


    // 10) iterator erase( iterator position )
#if false

    string str_res(str_ref);
    str_res.erase(str_res.begin());
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output:
    // str_ref = "Hello World! "
    // str_res = "ello World! "

#endif


    // 11) iterator erase( iterator first, iterator last )
#if false

    string str_res(str_ref);
    str_res.erase(str_res.begin(), str_res.begin()+5);
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output:
    // str_ref = "Hello World! "
    // str_res = " World! "

#endif

    // 12) erase()
#if false
    
    string str_res(str_ref);
    str_res.erase();
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output:
    // str_ref = "Hello World! "
    // str_res = ""

#endif

    // 13) void clear()
#if true

    string str_res(str_ref);
    str_res.erase();
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output:
    // str_ref = "Hello World! "
    // str_res = ""

#endif


    return 0;
} 






        
