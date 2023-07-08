#include <iostream>

int main()
{
  //! Case 1: Uninitialized pointer
  // int *pNumber; //* Dangling uninitialized pointer

  // std::cout << "Case 1: Uninitialized pointer: " << std::endl;
  // std::cout << "pNumber: "
  //           << pNumber << std::endl;
  // std::cout << "*pNumber: "
  //           << *pNumber << std::endl; //! CRASH

  //! Case 2: Deleted Pointer
  // std::cout << std::endl;
  // std::cout << "Case 2 : Deleted pointer" << std::endl;
  // int *pNumber1{new int{43}};

  // std::cout << "*pNumber1 (before delete): "
  //           << *pNumber1 << std::endl;

  // delete pNumber1;

  // std::cout << "*pNumber1 (after delete): "
  //           << *pNumber1 << std::endl;

  //! Case 3 : Multiple pointers pointing to same address
  // std::cout << std::endl;
  // std::cout << "Case 3 :Multiple pointers pointing to the same address: " << std::endl;

  // int *pNumber3{new int{43}};
  // int *pNumber4{pNumber3};

  // std::cout << "pNumber3: " << pNumber3
  //           << " - " << *pNumber3 << std::endl;
  // std::cout << "pNumber4: " << pNumber4
  //           << " - " << *pNumber4 << std::endl;

  //* deleting pNumber3
  // delete pNumber3;

  //! pNumber4 now points to deleted memory
  //! Dereferencing it will lead to undefined behaviour
  // std::cout << "pNumber4 (after deleting pNumber3): "
  //           << pNumber4 << " - " << *pNumber4 << std::endl;

  //? Solution 1: Initialize pointers immediately upon declaration
  // std::cout << std::endl;
  // std::cout << "Solution 1 : " << std::endl;
  // int *pNumber5{nullptr};
  // int *pNumber6{new int{65}};

  //* check for nullptr before use
  // if (pNumber6 != nullptr)
  // {
  //   std::cout << "*pNumber6 : " << *pNumber6 << std::endl;
  // }
  // else
  // {
  //   std::cerr << "!Error! Null pointer detected." << std::endl;
  // }

  //? Solution 2: reset pointer to nullptr right after deleting it
  // std::cout << std::endl;
  // std::cout << "Solution 2 :" << std::endl;
  // int *pNumber7{new int{87}};

  //* Use the pointer
  // std::cout << "pNumber7: " << pNumber7 << " - " << *pNumber7 << std::endl;

  // delete pNumber7;
  // pNumber7 = nullptr; //* Reset the pointer

  //* check for nullptr before use
  // if (pNumber7 != nullptr)
  // {
  //   std::cout << "*pNumber7 : " << *pNumber7 << std::endl;
  // }
  // else
  // {
  //   std::cerr << "!Error! Null pointer detected!" << std::endl;
  // }

  //? Solution 3: For pointers pointing at same address, make sure
  //? there is one clear pointer that owns the memory

  std::cout << std::endl;
  std::cout << "Solution 3:" << std::endl;
  int *pNumber8{new int{345}};
  int *pNumber9{pNumber8};

  //* dereferencing pointers and use them
  std::cout << "pNumber8: "
            << pNumber8 << " - " << *pNumber8 << std::endl;

  if (pNumber8 == nullptr)
  {
    std::cout << "pNumber9: "
              << pNumber9 << " - " << *pNumber9 << std::endl; //* only use slave pointers
  }

  delete pNumber8; //* release memory
  pNumber8 = nullptr;

  if (pNumber8 == nullptr)
  {
    std::cout << "pNumber9: "
              << pNumber9 << " - " << *pNumber9 << std::endl; //* only use slave pointers
  }
  else
  {
    std::cerr << "Memory not released properly." << std::endl;
  }

  std::cout << "Program ended well...." << std::endl;

  return 0;
}