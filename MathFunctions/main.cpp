#include <iostream>
#include <cmath>

int main()
{
  double weight{7.7};

  //! floor()
  std::cout << "Weight rounded to floor is: "
            << std::floor(weight) << std::endl;

  //! ceil()
  std::cout << "Weight rounded to ceil is: "
            << std::ceil(weight) << std::endl;

  //! abs()
  double savings{-5000};

  std::cout << "Abs of weight is: "
            << std::abs(weight) << std::endl;
  std::cout << "Abs of savings is: "
            << std::abs(savings) << std::endl;

  //! exp()
  //* f(x) = e ^ x, where e = 2.71828 .
  //* Test the resul against a calculator

  double exponential = std::exp(10);
  std::cout << "THe exponential of 10 is: "
            << exponential << std::endl;

  //! pow()
  std::cout << "3 ^ 4 is: "
            << std::pow(3, 4) << std::endl;
  std::cout << "9 ^ 3 is: "
            << std::pow(9, 3) << std::endl;

  //! log()
  //* reverse function of pow. if 2^3 = 8, log 8 in base 2 = 3.
  //* e^4 = 54.59, what will be log 54.59 in base e = ?

  std::cout << "Log; to get 54.59, you would elevate e to the power of: "
            << std::log(54.59) << std::endl;

  //* log10, 10 ^ 4 = 10000, to get 10k, you'd need to elevate 10 to the power of 4

  std::cout << "To get 10000, you'd need to elevate 10 to the power of: "
            << std::log10(10000) << std::endl;

  //! sqrt()
  std::cout << "The square root of 81 is: " << std::sqrt(81) << std::endl;

  //! round()
  //* halfway points are rounded up to whole number, Ex: 0.5 -> 1 , 2.34 -> 2 

  std::cout << "3.654 is rounded to: "
            << std::round(3.654) << std::endl;
  std::cout << "2.5 is rounded to: "
            << std::round(2.5) << std::endl;
  std::cout << "2.4 is rounded to: "
            << std::round(2.4) << std::endl;
  return 0;
}