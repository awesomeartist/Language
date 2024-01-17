#include <iostream>
#include <iomanip>
#include <string>
#include "00_string.hpp"

using namespace std;

void print(string name) {
    cout << name << endl;
}

void print(string name, string str) {
    cout << name << " = " << quoted(str) << endl;
}

void print(string name, string_view str) {
    cout << name << " = " << quoted(str) << endl;
}

void print(string name, char ch) {
    cout << name << " = " << '\'' << ch << '\'' << endl;
}

void print(string name, bool flag) {
    cout << boolalpha;
    cout << name << flag << endl;
}

void print(string name, size_t count) {
    cout << name << " = " << count << endl;
}

void print(string name, int num) {
    cout << name << " = " << num << endl;
}

void print(string name, float num) {
    cout << name << " = " << num << endl;
}

void print(string name, string::iterator it) {
    cout << name << " = " << *it << endl;
}

void print(string::iterator it) {
    cout << *it << " ";
}

void print(string::reverse_iterator it) {
    cout << *it << " ";
}