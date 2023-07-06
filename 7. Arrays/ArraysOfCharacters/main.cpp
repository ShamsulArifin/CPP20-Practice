#include <iostream>

int main()
{
  //* Declare array
  char message[5]{'H', 'e', 'l', 'l', 'o'};

  //* Print the array through looping
  // std::cout << "message: ";
  // for (auto c : message)
  // {
  //   std::cout << c;
  // }
  // std::cout << std::endl;

  //* Change characters in array
  // message[2] = '!';

  //* Print the array through looping
  // std::cout << "message: ";
  // for (auto c : message)
  // {
  //   std::cout << c;
  // }
  // std::cout << std::endl;

  //! this will print garbage values at the end of the string array
  //! if the is no '\0' null terminator added at the end
  //! or if there is not specified size for the array to have a null terminator
  // std::cout << "message: " << message << std::endl;

  //? A null terminated string is called C-string

  char message1[]{'H', 'e', 'l', 'l', 'o', '\0'};
  std::cout << "message1: " << message1 << std::endl;
  std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;

  //* added extra index for null terminator
  //! no need to add '\0' here, compiler will add it at the end
  char message2[6]{'H', 'e', 'l', 'l', 'o'};
  std::cout << "message2: " << message2 << std::endl;
  std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;

  //! this is not a C-string
  char message3[]{'H', 'e', 'l', 'l', 'o'};
  std::cout << "message3: " << message3 << std::endl;
  std::cout << "sizeof(message3): " << sizeof(message3) << std::endl;

  //* String literal
  char message4[]{"hello"}; //! this will be null terminated
  std::cout << "message4: " << message4 << std::endl;
  std::cout << "sizeof(message4): " << sizeof(message4) << std::endl;

  int numbers[]{1, 2, 3, 4, 5};
  std::cout << "numbers: " << numbers << std::endl;

  return 0;
}