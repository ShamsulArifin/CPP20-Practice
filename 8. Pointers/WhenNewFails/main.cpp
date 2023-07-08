#include <iostream>

int main()
{
  //! ran out of heap memory, will crash!!
  // int *data = new int[10000000000000];

  //! overloading heap memory with loop, will crash!!
  // for (size_t i{0}; i < 10000000; ++i)
  // {
  //   int *data = new int[100000000];
  // }

  //? solution 1: exception mechanism
  // for (size_t i{0}; i < 100; ++i)
  // {
  //   try
  //   {
  //     int *data = new int[10000000000];
  //   }
  //   catch (std::exception &ex)
  //   {
  //     std::cout << "Exception found: " << ex.what() << std::endl;
  //   }
  // }

  //? solution 2: std::nothrow
  for (size_t i{0}; i < 100; ++i)
  {

    int *data = new (std::nothrow) int[10000000000];

    if (data != nullptr)
    {
      std::cout << "Data allocated" << std::endl;
    }
    else
    {
      std::cout << "Data allocation failed" << std::endl;
    }
  }

  std::cout << "Program ending well...." << std::endl;

  return 0;
}