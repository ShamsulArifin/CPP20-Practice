#include <iostream>
#include <string>

void max_str(const std::string &input1, const std::string input2, std::string &output)
{
  if (input1 > input2)
  {
    output = input1;
  }
  else
  {
    output = input2;
  }
}

void max_int(int input1, int input2, int &output)
{
  if (input1 > input2)
  {
    output = input1;
  }
  else
  {
    output = input2;
  }
}

void max_double(double input1, double input2, double *output)
{
  if (input1 > input2)
  {
    *output = input1;
  }
  else
  {
    *output = input2;
  }
}

int main()
{

  double out_double, in_double1{45.8}, in_double2{6.9};

  max_double(in_double1, in_double2, &out_double);

  std::cout << "max_double: " << out_double << std::endl;
  // int out_int;
  // int in1{45}, in2{723};

  // max_int(in1, in2, out_int);
  // std::cout << "Max integer value: " << out_int << std::endl;

  // std::string out_str, string1("Casablanca"), string2("Bellevue");

  // max_str(string1, string2, out_str);
  // std::cout << "The larger of the two strings is: "
  //           << out_str << std::endl;

  return 0;
}