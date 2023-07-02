#include <iostream>

int main()
{
  int max{}, a{35}, b{20};

  std::cout << std::endl;
  std::cout << "using regular if" << std::endl;

  if (a > b)
  {
    max = a;
  }
  else
  {
    max = b;
  }

  max = (a > b) ? a : b; //* using ternary operator

  std::cout << "max: " << max << std::endl;

  return 0;
}