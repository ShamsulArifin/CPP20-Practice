#include <iostream>

int main()
{
  const int COUNT{10};
  size_t i{0};  //* Iterator declaration 

  do
  {
    std::cout << i << " : I love c++" << std::endl;
    ++i;       //* Incrementation
  } while (i < COUNT);     //* Condition

  std::cout << "Loop is done!" << std::endl;

  return 0;
}