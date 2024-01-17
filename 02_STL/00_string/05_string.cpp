#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;

int main()
    {
        // 比较相关操作

        string str_ref_1 = "Hello World!";
        string str_ref_2 = "Hello world!";

        print("str_ref_1", str_ref_1);
        print("str_ref_2", str_ref_2);

        // 1) ==
        print("str_ref_1 == str_ref_2: ", (str_ref_1 == str_ref_2)); 


        // 2) int compare( const basic_string& str )
        print("str_ref_1.compare(str_ref_2): ", str_ref_1.compare(str_ref_2));


        // 3) bool starts_with( const CharT* s ) 
        print("str_ref_1.starts_with(\"Hel\"): ", str_ref_1.starts_with("Hel"));
        

        // 4) bool ends_with( const CharT* s )
        print("str_ref_1.ends_with(\"d!\"): ", str_ref_1.ends_with("d!"));


        // 5) bool contains( const CharT* s )
        print("str_ref_2.contains(\"w\"): ", str_ref_2.contains("w"));


        // output: str_ref_1 = Hello World!
        //         str_ref_2 = Hello world!
        //         str_ref_1 == str_ref_2: false
        //         str_ref_1.compare(str_ref_2): -1
        //         str_ref_1.starts_with("Hel"): true
        //         str_ref_1.ends_with("d!"): true
        //         str_ref_2.contains("w"): true
        
        return 0;
    }