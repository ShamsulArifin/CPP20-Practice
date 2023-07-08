#include <iostream>

int main()
{
  int *pNumber{new int{67}}; //* points to a address, lets call it address:1

  // Should delete and reset here
  int number{55};    //* stack variable, lets call this one address: 2
  pNumber = &number; //! pNumber points to address: 2
                     //! but address: 1 is still in the program.
                     //! but the program lost access to that memory
                     //! Memory has been leaked.

  //* Double allocation
  int *pNumber1{new int{55}};

  //* Use the pointer

  //* should delete and reset here

  pNumber1 = new int{44}; //! memory with int{55} leaked.

  //* Nested scopes with dynamically allocated memory
  {
    int *pNumber2{new int{57}};

    //* should delete and reset here
  }
  //! Memory with int{57} leaked.

  return 0;
}