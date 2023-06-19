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

  if (greenLight)
  {
    std::cout << "The light is green!" << std::endl;
  }
  else
  {
    std::cout << "The light is not green!" << std::endl;
  }

  // sizeof()
  std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;

  // printing out a bool
  // 1 -->> true
  // 0 -->> false
  std::cout << std::endl;
  std::cout << "red light: " << redLight << std::endl;
  std::cout << "green light: " << greenLight << std::endl;

  std::cout << std::boolalpha;
  std::cout << "red light: " << redLight << std::endl;
  std::cout << "green light: " << greenLight << std::endl;

  return 0;
}