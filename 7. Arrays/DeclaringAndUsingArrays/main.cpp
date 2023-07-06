#include <iostream>

int main()
{
  //* Declaring array
  //! declaring without initialization will hold garbage data
  int scores[10];

  //* Read data
  std::cout << " scores [0] : " << scores[0] << std::endl;
  std::cout << " scores [1] : " << scores[1] << std::endl;

  //* Read with a loop
  for (size_t i{0}; i < 10; ++i)
  {
    std::cout << " scores [" << i << "] : "
              << scores[i] << std::endl;
  }
  std::cout << "Loop done." << std::endl;

  //* Write data into an array
  scores[0] = 19;
  scores[1] = 21;
  scores[2] = 23;
  scores[3] = 25;
  scores[4] = 27;
  scores[5] = 29;
  scores[6] = 31;
  scores[7] = 33;
  scores[8] = 35;
  scores[9] = 21;

  for (size_t i{0}; i < 10; ++i)
  {
    std::cout << " scores [" << i << "] : "
              << scores[i] << std::endl;
  }
  std::cout << "Loop done." << std::endl;

  //* Write data into array using loop
  for (size_t i{}; i < 10; ++i)
  {
    scores[i] = i * 10;
  }

  for (size_t i{0}; i < 10; ++i)
  {
    std::cout << " scores [" << i << "] : "
              << scores[i] << std::endl;
  }
  std::cout << "Loop done." << std::endl;

  //* Declare and initialize array at the same time
  double salaries[5]{12.7, 7.5, 13.2, 8.1, 9.3};

  for (size_t i{0}; i < 5; ++i)
  {
    std::cout << " salaries [" << i << "] : "
              << salaries[i] << std::endl;
  }
  std::cout << "Loop done." << std::endl;

  //! if all elements not initialized, left out elements will be initialized to 0
  int families[5]{12, 7, 5}; //* Only three elements are initialized

  for (size_t i{0}; i < 5; ++i)
  {
    std::cout << " families [" << i << "] : "
              << families[i] << std::endl;
  }
  std::cout << "Loop done." << std::endl;

  //* Omit the size of the array at declaration
  int classSizes[]{10, 12, 15, 11, 18, 19};

  //* will print this with a range based for loop
  for (auto value : classSizes)
  {
    std::cout << "value : " << value << std::endl;
  }
  std::cout << "Loop done." << std::endl;

  //! read only arrays
  const int birds[]{10, 12, 15, 11, 18, 19};
  //! Trying to modify constant element throws error:
  // birds[5] = 8;

  //* Sum up scrs array, store result in sum
  int scrs[]{2, 3, 4, 5, 6, 7};
  int sum{0};

  for (int element : scrs)
  {
    sum += element;
  }
  std::cout << "score sum: " << sum << std::endl;

  return 0;
}