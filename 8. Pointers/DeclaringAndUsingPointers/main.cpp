#include <iostream>

int main()
{
  //* Declare and initialize pointer
  //! pointers can only hold the addresses of variables of same type
  int *pNumber{}; //! will initialize with nullptr
  double *pFractionalNumber{};

  //* explicitly initialize with nullptr
  int *pNumber1{nullptr};
  double *pFractionalNumber1{nullptr};

  //* pointers to different variables are of the same size
  std::cout << "sizeof(int): " << sizeof(int) << std::endl;
  std::cout << "sizeof(double): " << sizeof(double) << std::endl;
  std::cout << "sizeof(double*): " << sizeof(double *) << std::endl;
  std::cout << "sizeof(int*): " << sizeof(int *) << std::endl;
  std::cout << "sizeof(pNumber1): " << sizeof(pNumber1) << std::endl;
  std::cout << "sizeof(pFractionalNumber1): " << sizeof(pFractionalNumber1) << std::endl;

  int *pNumber2{}, number3;                                           //! the second declared variable won't be a pointer
  std::cout << "sizeof(pNumber2): " << sizeof(pNumber2) << std::endl; //* size is 8
  std::cout << "sizeof(number3): " << sizeof(number3) << std::endl;   //* size is 4

  //? do this instead
  // int *pNumber2{}, *number3;
  //? or like this on separate lines
  // int *pNumber2{};
  // int *number{};

  //* Initializing pointers and assigning them data
  int var{43};
  int *pVar{&var}; //? the address of operator (&)

  std::cout << "var: " << var << std::endl;
  std::cout << "address of var: " << pVar << std::endl;

  //! can't cross assign between pointers of different types
  int *pInt1{nullptr};
  double doubleVar{33};

  // pInt1 = & doubleVar; //! compiler error!

  //* dereferencing a pointer
  int *pInt2{nullptr};
  int intData{56};
  pInt2 = &intData;

  //? adding pointer sign will output the value of the variable
  //? the pointer is holding of the address
  std::cout << "value: " << *pInt2 << std::endl;  //* value
  std::cout << "address: " << pInt2 << std::endl; //* address

  return 0;
}