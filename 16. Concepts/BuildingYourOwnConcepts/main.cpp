#include <iostream>
#include <concepts>

//* Syntax 1

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <MyIntegral T>
  requires MyIntegral<T>
T add(T a, T b)
{
  return a + b;
}

int main()
{
  double x{6};
  double y{7};

  add(x, y);
  return 0;
}