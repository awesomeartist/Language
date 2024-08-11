#include <string>


void print(std::string name);
void print(const char* name, const char *str);
void print(std::string name, std::string str);
void print(std::string name, std::string_view str);
void print(std::string name, char ch);
void print(std::string name, bool flag);
void print(std::string name, std::size_t count);
void print(std::string name, int num);
void print(std::string name, float num);
void print(std::string name, std::string::iterator it);
void print(std::string::iterator it);
void print(std::string::reverse_iterator it);