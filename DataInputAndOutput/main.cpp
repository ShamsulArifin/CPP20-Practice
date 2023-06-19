#include <iostream>
#include <string>

int main()
{
  // Print data
  // std::cout << "Hello World!" << std::endl;

  // int age{23};
  // std::cout << "My age is " << age << std::endl;

  // std::cerr << "Error message: something is wrong" << std::endl;
  // std::clog << "Log message: Something happened" << std::endl;

  // int age1;
  // std::string name;
  // std::cout << "Type your age and name:" << std::endl;
  // std::cin >> age1 >> name;
  // std::cout << "name: " << name << std::endl;
  // std::cout << "age: " << age1 << std::endl;

  std::string full_name;
  int age;

  std::cout << "Please enter name and age: " << std::endl;
  std::getline(std::cin, full_name);
  std::cin >> age;

  std::cout << "your name: " << full_name << " your age: " << age << std::endl;
  return 0;
}