#include <iostream>

//* tools
const int pen{10}, marker{20}, eraser{30}, rectangle{40}, circle{50}, ellipse{60};

int main()
{
  int tool{eraser};

  //! must add the break statement after the end of each case.
  //! if not added it will continue to go on to the next case and so on.
  //! the condition should be in integral types and enums.

  switch (tool)
  {
  case pen:
  {
    std::cout << "Active tool is Pen." << std::endl;
  }
  break;
  case marker:
  {
    std::cout << "Active tool is Marker." << std::endl;
  }
  break;
  case eraser:
  case rectangle:
  case circle:
  {
    std::cout << "Drawing shape" << std::endl;
  }
  break;
  case ellipse:
  {
    std::cout << "Active tool is Ellipse." << std::endl;
  }
  break;
  default:
  {
    std::cout << "No match found" << std::endl;
  }
  break;
  }

  std::cout << "Moving on...." << std::endl;
  return 0;
}