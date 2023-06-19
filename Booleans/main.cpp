#include <iostream>

int main()
{
  bool redLight{true};
  bool greenLight{false};

  if (redLight == true)
  {
    std::cout << "Stop!" << std::endl;
  }
  else
  {
    std::cout << "Go through!" << std::endl;
  }
  return 0;
}