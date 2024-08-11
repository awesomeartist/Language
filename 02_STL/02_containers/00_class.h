#include <iostream>
#include <string>


class User {
 private:
  std::string user_name;
  int age;
  
 public:
  User() : user_name(""), age(0) {}
  User(const std::string& user_name, const int& age) 
      : user_name(user_name), age(age) {}
  void set(const std::string& username, const int& age) {
      this->user_name = username;
      this->age = age;
  }
  void SayHello() {
      std::cout << "Hello, My name is " << user_name << std::endl
      << "And I'm " << age << " years old." << std::endl;
  }
};
