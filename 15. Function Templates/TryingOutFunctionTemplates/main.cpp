#include <iostream>

template <typename T>
T maximum(T a, T b)
{
  return (a > b) ? a : b;
}

int main()
{
  int x{5}, y{7};
  // std::string x{"Hello"}, y{"Python"};
  int *p_x{&x}, *p_y{&y};

  auto result = maximum(p_x, p_y);

  std::cout << "max: " << result << std::endl;

  return 0;
}