#include <iostream>

int main()
{
  for (unsigned int i{0}; i < 10; ++i)
  {
    std::cout << i << " : I love c++" << std::endl;
  }
  std::cout << "Loop done" << std::endl;

  //* use size_t : a representation of some unsigned int for positive numbers [sizes]
  for (size_t i{0}; i < 10; ++i)
  {
    std::cout << i << " : I love c++" << std::endl;
  }
  std::cout << "Loop done" << std::endl;

  //! size of size_t
  std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;

  //* scope of the iterator
  for (size_t i{0}; i < 10; ++i)
  {
    std::cout << i << " : I love c++" << std::endl;
  }
  std::cout << "Loop done" << std::endl;

  //* Iterator declared outside the loop
  size_t i{0};

  for (i; i < 10; ++i)
  {
    std::cout << i << " : I love c++" << std::endl;
  }
  std::cout << "Loop done" << std::endl;
  std::cout << "i: " << i << std::endl;

  //* Leave out the iterator declaration part from the loop
  //size_t i{0};

  for (; i < 10; ++i)
  {
    std::cout << i << " : I love c++" << std::endl;
  }
  std::cout << "Loop done" << std::endl;
  std::cout << "i: " << i << std::endl;

  //! don't hard code values
  const size_t COUNT{10};

  for (size_t i{0}; i < COUNT; ++i)
  {
    std::cout << i << " : I love c++" << std::endl;
  }
  std::cout << "Loop done" << std::endl;

  return 0;
}