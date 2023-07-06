#include <iostream>

int main()
{
  int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 11, 13, 14, 15, 16};

  //! will only work in c++17 or upper
  int count{std::size(scores)}; //* get size of an array on runtime

  //! sln for lower thn c++17
  // std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
  // std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;

  // int count{sizeof(scores)/sizeof(scores[0])};

  //! usual for loop for getting indicies and values
  // for (size_t i{0}; i < count; ++i)
  // {
  //   std::cout << "scores [" << i << "] : "
  //             << scores[i] << std::endl;
  // }

  //! Ranged based for loop , use only for getting values
  for (auto i : scores)
  {
    std::cout << "value : " << i << std::endl;
  }

  return 0;
}