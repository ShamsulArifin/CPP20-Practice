#include <iostream>

int main()
{
  const char *message{"Hello World!"};

  std::cout << "message: " << message << std::endl;
  std::cout << "*message: " << *message << std::endl;

  //!compiler error
  // *message = "b";

  //? Allow to modify the string
  char message1[] {"Hello World!"};
  message1[0] = 'b';

  std::cout << "message1: " << message1 << std::endl;


  return 0;
}