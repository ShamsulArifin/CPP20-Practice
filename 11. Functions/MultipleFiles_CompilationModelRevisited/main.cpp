#include <iostream>
#include "compare.h"
#include "operations.h"

int main()
{
  int maximum = max(34, 54);
  int minimum = min(65, 34);
  int increment = incMult(4, 8);

  std::cout << "Maximum: "
            << maximum << std::endl;
  std::cout << "Minimum: "
            << minimum << std::endl;
  std::cout << "Increment: "
            << increment << std::endl;

  return 0;
}
