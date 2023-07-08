#include <iostream>

int main()
{
  //* verbose nullptr check
  std::cout << std::endl;
  std::cout << "verbose nullptr check: " << std::endl;

  int *pNumber{}; //* initialized to nullptr
  // pNumber = new int(7);

  // if (!(pNumber == nullptr))
  // {
  //   std::cout << "pNumber points to a valid address: " << pNumber << std::endl;
  //   std::cout << "*pNumber: " << *pNumber << std::endl;
  // }
  // else
  // {
  //   std::cout << "pNumber points to an invalid address: " << std::endl;
  // }

  if (pNumber)
  {
    std::cout << "pointer points to a valid address: " << pNumber << std::endl;
    std::cout << "*pNumber: " << *pNumber << std::endl;
  }
  else
  {
    std::cout << "invalid address" << std::endl;
  }

  delete pNumber;
  nullptr;

  //? It is okay to call delete on a nullptr
  int *pNumber1{};
  delete pNumber1;    //* This wont cause any problem

  return 0;
}