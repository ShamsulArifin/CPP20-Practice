#include <iostream>
#include "person.h"

//* variable : declaration and definition
double weight{};

//! cant define same variable again
//! will cause compile error
// double weight{};

struct Point
{
  double m_x{};
  double m_y{};
};

double add(double a, double b);

int main()
{
  //* can redefine class/struct again in different translation unit
  Point p1;

  std::cout << "p1.x: " << p1.m_x << ", p1.y: " << p1.m_y << std::endl;

  double result = add(10, 30);
  std::cout << "result: " << result << std::endl;

  return 0;
}

double add(double a, double b)
{
  return a + b;
}

//! cant define same function again
//! will cause compile error
// double add(double a, double b)
// {
//   return a + b;
// }