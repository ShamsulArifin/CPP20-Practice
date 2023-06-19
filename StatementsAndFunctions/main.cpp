#include <iostream>

int addNumbers(int first_param, int second_param)
{
  int result{first_param + second_param};
  return result;
}

int multiplyNumbers(int first_param, int second_param)
{
  int result{first_param * second_param};
  return result;
}

int main()
{
  int first_number{3}; // statement
  int second_number{7};
  std::cout << "first_number:" << first_number << std::endl;
  std::cout << "second_number:" << second_number << std::endl;

  int sum{first_number + second_number}; // sum
  std::cout << "sum:" << sum << std::endl;

  sum = addNumbers(25, 7); // using custom function
  std::cout << "sum:" << sum << std::endl;

  sum = addNumbers(30, 45);
  std::cout << "sum:" << sum << std::endl;

  std::cout << "sum:" << addNumbers(4, 99) << std::endl;
  std::cout << "sum:" << multiplyNumbers(4, 8) << std::endl;

  return 0;
}