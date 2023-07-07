#include <iostream>

int main()
{
  //* how we used pointers so far
  // int number{22};   //? in stack

  // int *pNumber = &number;

  // std::cout << std::endl;
  // std::cout << "Declaring pointer and assigning address: " << std::endl;
  // std::cout << "number: " << number << std::endl;
  // std::cout << "pNumber: " << pNumber << std::endl;
  // std::cout << "&number: " << &number << std::endl;
  // std::cout << "*pNumber: " << *pNumber << std::endl;

  // int *pNumber1; //! uninitialized pointer, contains junk address
  // int number1{12};
  // pNumber1 = &number1; //* point it to a valid address
  // std::cout << std::endl;
  // std::cout << "Uninitialized Pointer: " << std::endl;
  // std::cout << "*pNumber1: " << *pNumber1 << std::endl;

  //! BAD
  //* Writing into uninitialized pointer through dereference
  // int *pNumber2; //! contains junk address: could be anything
  // std::cout << "Writing in the 55" << std::endl;
  // *pNumber2 = 55; //! writing into junk address: BAD!
  // std::cout << std::endl;
  // std::cout << "**Writing into Uninitialized Pointer**" << std::endl;
  // std::cout << "pNumber2: " << pNumber2 << std::endl; //* Reading from junk address.
  // std::cout << "*pNumber2: " << *pNumber2 << std::endl;

  // //* Initializing pointer to null
  // //* int *pNumber3{nullptr};  also works
  // int *pNumber3{}; //* initialized with pointer equivalent of zero: nullptr
  //                  //* a pointer pointing nowhere
  // //* pNumber3 = 33; // writing into a pointer pointing nowhere: BAD, Crash

  // std::cout << std::endl;
  // std::cout << "Reading and writing through nullptr: " << std::endl;
  // std::cout << "pNumber3: " << pNumber3 << std::endl;
  // std::cout << "*pNumber3: " << *pNumber3 << std::endl; //* Reading from nullptr
  //! BAD, Crash!

  //* Dynamic heap memory
  // int *pNumber4{nullptr};
  // pNumber4 = new int; //* Dynamically allocate space for a single int on the heap
  // *pNumber4 = 77;     //* writing into dynamically allocated memory
  // std::cout << std::endl;
  // std::cout << "Dynamically Allocated Memory:" << std::endl;
  // std::cout << "pNumber4: " << *pNumber4 << std::endl;
  // std::cout << "address of pNumber4: " << pNumber4 << std::endl;

  // //* Return memory to the OS;
  // delete pNumber4;
  // pNumber4 = nullptr;

  //? It is possible to initialize pointer a valid address
  //? up on declaration. Not with a nullptr
  int *pNumber5{new int};     //! contains junk value
  int *pNumber6{new int(22)}; //* use direct initialization
  int *pNumber7{new int{23}}; //* use uniform initialization

  std::cout << std::endl;
  std::cout << "Valid pointers after allocation." << std::endl;
  std::cout << "pNumber5: " << pNumber5 << std::endl;
  std::cout << "*pNumber5: " << *pNumber5 << std::endl; //! junk value

  std::cout << "pNumber6: " << pNumber6 << std::endl;
  std::cout << "*pNumber6: " << *pNumber6 << std::endl;

  std::cout << "pNumber7: " << pNumber7 << std::endl;
  std::cout << "*pNumber7: " << *pNumber7 << std::endl;

  //? release the memory
  delete pNumber5;
  pNumber5 = nullptr;

  delete pNumber6;
  pNumber6 = nullptr;

  delete pNumber7;
  pNumber7 = nullptr;

  //? can reuse pointers
  pNumber5 = new int(81);
  std::cout << "*pNumber5: " << *pNumber5 << std::endl;

  delete pNumber5;
  pNumber5 = nullptr;

  //! calling delete twice on a pointer : BAD!
  pNumber5 = new int(99);
  std::cout << "*pNumber5: " << *pNumber5 << std::endl;

  delete pNumber5;
  // delete pNumber5;

  std::cout << "Program is ending..." << std::endl;

  return 0;
}