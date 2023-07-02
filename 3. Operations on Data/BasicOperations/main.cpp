#include <iostream>

int main()
{
  int number1{2};
  int number2{7};

  // Addition
  int result = number1 + number2;
  std::cout << "addition result: " << result << std::endl;

  // Subtraction
  result = number2 - number1;
  std::cout << "subtraction result: " << result << std::endl;

  // Multiplication
  result = number1 * number2;
  std::cout << "multiplication result: " << result << std::endl;

  // Division
  result = number2 / number1;
  std::cout << "division result: " << result << std::endl;

  // Modulus
  result = number2 % number1;
  std::cout << "modulus result: " << result << std::endl;

  result = 31 % 10;
  std::cout << "result: " << result << std::endl;
  return 0;
}