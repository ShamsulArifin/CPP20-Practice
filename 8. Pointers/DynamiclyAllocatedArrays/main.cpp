#include <iostream>

int main()
{
  const size_t size{10};

  //* different ways you can declare an array dynamically and
  //* how they are initialized

  double *pSalaries{new double[size]};            //! initializing like this will contain garbage value
  int *pStudents{new (std::nothrow) int[size]{}}; //* All values initialized to 0

  //? allocating memory space for an array of size double,
  //? first 5 elements will initialized as given below
  //? and rest will be initialized to 0.
  double *pScores{new (std::nothrow) double[size]{1, 2, 3, 4, 5}};

  //* nullptr check and use the allocated array
  if (pScores)
  {
    std::cout << "size of scores: " << sizeof(pScores) << std::endl;
    std::cout << "Successfully allocated memory" << std::endl;

    //* print out elements, can use regular array access notation, or pointer arithmetic
    for (size_t i{}; i < size; ++i)
    {
      std::cout << "value: " << pScores[i] << " : " << *(pScores + i) << std::endl;
    }
  }

  //* delete and reset the dynamic array to nullptr
  delete[] pSalaries;
  pSalaries = nullptr;

  delete[] pStudents;
  pStudents = nullptr;

  delete[] pScores;
  pScores = nullptr;

  //* static array vs dynamic arrays
  std::cout << "==================================" << std::endl;
  int scores[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  std::cout << "score size: " << std::size(scores) << std::endl;

  for (auto s : scores)
  {
    std::cout << "value: " << s << std::endl;
  }

  int *pScores1 = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // std::cout << "pScores1 size:" << std::size(pScores1) << std::endl;  //! cant use std::size() on dynamic arrays

  //! cant use ranged based for loop for dynamic arrays
  // for (auto s : pScores1)
  // {
  //   std::cout << "value: " << s << std::endl;
  // }

  return 0;
}