#include <iostream>

int main()
{
  int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

  //! Read beyond bounds: will read garbage data or crash the program
  std::cout << "numbers: " << numbers[12] << std::endl;

  //! compiler will allow it, but you numbers array doesn't have index [12]
  //! so it it may impact in other areas of the program
  numbers[1112] = 1000;
  std::cout << "numbers[12]: " << numbers[12] << std::endl;

  return 0;
}