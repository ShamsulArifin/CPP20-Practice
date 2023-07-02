#include <iostream>
#include <iomanip>

int main()
{
  float number1{1.12345678901234567890f}; // precision 7
  double number2{1.12345678901234567890}; // precision 15
  long double number3{1.12345678901234567890L};

  std::cout << "sizeof float: " << sizeof(float) << std::endl;
  std::cout << "sizeof double: " << sizeof(double) << std::endl;
  std::cout << "sizeof long double: " << sizeof(long double) << std::endl;

  // Precision
  std::cout << std::setprecision(20); // Control the precision from std::cout
  std::cout << "number1 is: " << number1 << std::endl;
  std::cout << "number2 is: " << number2 << std::endl;
  std::cout << "number3 is: " << number3 << std::endl;

  float number4 = 192400023.0f; // Error : narrowing conversion

  std::cout << "number4: " << number4 << std::endl;

  std::cout << "-------------------------------------------" << std::endl;

  // Scientific notation
  double number5{192400023};
  double number6{1.9240023e8};
  double number7{1.924e8};

  double number8{0.0000000003498};
  double number9{3.498e-11};

  std::cout << "number5 is: " << number5 << std::endl;
  std::cout << "number6 is: " << number6 << std::endl;
  std::cout << "number7 is: " << number7 << std::endl;
  std::cout << "number8 is: " << number8 << std::endl;
  std::cout << "number9 is: " << number9 << std::endl;

  std::cout << "-------------------------------------------" << std::endl;

  // infinity and NaN
  std::cout << std::endl;
  std::cout << "Infinity and NaN" << std::endl;

  double number10{5.6};
  double number11{}; // initialized to zero
  double number12{}; // initialized to zero

  double result{number10 / number11};

  std::cout << number10 << "/" << number11 << " yields " << result << std::endl;

  return 0;
}