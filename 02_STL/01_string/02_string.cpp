#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;

int main() 
{
    // 元素访问

    
/*
    1) CharT& operator[]( size_type pos )
    []，对访问的边界不做检查
*/
#if false 
   
    string str_ref = "Hello Word!";
    string str_res = str_ref;
    str_res[1] = 'E';
    // str_res[20] = 'E';
    print("str_ref[1]", str_ref[1]);
    print("str_res[1]", str_res[1]);
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output: 
    // str_ref[1] = 'e'
    // str_res[1] = 'E'
    // str_ref = "Hello Word!"
    // str_res_1 = "HEllo Word!"    

#endif


/*  
    2) CharT& at()
    对访问边界有检查，以字节为单位
*/
#if true

    string str_ref = "Hello Word!";
    string str_res(str_ref);
    str_res.at(6) = 'w';
    print("str_ref.at(6)", str_ref.at(6));
    print("str_res.at(6)", str_res.at(6));
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output: 
    // str_ref.at(6) = 'W'
    // str_res.at(6) = 'w'
    // str_ref = "Hello Word!"
    // str_res = "Hello word!"

#endif

/*
    3) front()
    CharT& front()
*/

#if false

    string str_ref("Hello World!");
    string str_res(str_ref);
    str_res.front() = 'h';
    print("str_ref.front()", str_ref.front());
    print("str_res.front()", str_res.front());
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output: 
    // str_ref.front() = 'H'
    // str_res.front() = 'h'
    // str_ref = "Hello Word!"
    // str_res = "hello Word!"

#endif

/*
    4) back()
    CharT& back()
*/

#if false
    string str_ref("Hello World!");
    string str_res(str_ref);
    str_res.back() = '.';
    print("str_ref.back()", str_ref.back());
    print("str_res.back()", str_res.back());
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output: 
    // str_ref.back() = '!'
    // str_res.back() = '.'
    // str_ref = "Hello Word!"
    // str_res = "Hello Word."

#endif 


/*
    5) c_str()
    CharT* c_str()
*/
#if false

    string str_ref("Hello World!");
    string str_res(str_ref);
    print("str_ref", str_ref);
    print("str_ref.c_str()", str_ref.c_str());

    // output:
    // str_ref = "Hello Word!"
    // str_ref.c_str() = "Hello Word!"

#endif


/*
    6) data()
    CharT* data()
*/
#if false

    string str_ref("Hello World!");
    string str_res(str_ref);
    print("str_ref", str_ref);
    print("str_ref.data()", str_ref.data());

    // output:
    // str_ref = "Hello Word!"
    // str_ref.data() = "Hello Word!"

#endif

    return 0;
}