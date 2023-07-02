#include <iostream>

//* tools
const int pen{10}, marker{20}, eraser{30}, rectangle{40}, circle{50}, ellipse{60};

int main()
{
  int tool{marker};

  if (tool == pen)
  {
    std::cout << "Active tool is Pen" << std::endl;
  }
  else if (tool == marker)
  {
    std::cout << "Active tool is Marker" << std::endl;
  }
  else if (tool == eraser)
  {
    std::cout << "Active tool is Eraser" << std::endl;
  }
  else if (tool == rectangle)
  {
    std::cout << "Active tool is Rectangle" << std::endl;
  }
  else if (tool == circle)
  {
    std::cout << "Active tool is Circle" << std::endl;
  }
  else if (tool == ellipse)
  {
    std::cout << "Active tool is Ellipse" << std::endl;
  }

  std::cout << "Moving on" << std::endl;

  return 0;
}