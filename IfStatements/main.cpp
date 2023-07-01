#include <iostream>

int main()
{
  int number1{65};
  int number2{60};

  bool result = (number1 < number2); //* expression yielding the condition
  std::cout << std::boolalpha << "result: " << result << std::endl;

  std::cout << std::endl;
  std::cout << "free standing statement" << std::endl;

  //* if(result) {
  if (result == true)
  {
    std::cout << number1 << " is less than " << number2 << std::endl;
  }

  //* if(!result){
  if (!(result == true))
  {
    std::cout << number1 << " is NOT less than " << number2 << std::endl;
  }

  //* using else
  std::cout << std::endl;
  std::cout << "using the else claus: " << std::endl;

  if (result == true)
  {
    std::cout << number1 << " is less than " << number2 << std::endl;
  }
  else
  {
    std::cout << number1 << " is NOT less than " << number2 << std::endl;
  }

  //* use expression as condition directly
  std::cout << std::endl;
  std::cout << "using expression as condition " << std::endl;

  if (number1 < number2)
  {
    std::cout << number1 << " is less than " << number2 << std::endl;
  }
  else
  {
    std::cout << number1 << " is NOT less than " << number2 << std::endl;
  }

  //* nesting if statements
  std::cout << std::endl;
  std::cout << "Nesting if statements: " << std::endl;

  bool red{false}, green{true}, yellow{false}, policeStop{true};

  if (red)
  {
    std::cout << "STOP!" << std::endl;
  }
  if (yellow)
  {
    std::cout << "Slow down" << std::endl;
  }
  if (green)
  {
    std::cout << "Go" << std::endl;
  }

  std::cout << std::endl;
  std::cout << "Police officer stops(verbose)" << std::endl;
  if (green)
  {
    if (policeStop)
    {
      std::cout << "Stop" << std::endl;
    }
    else
    {
      std::cout << "Continue going straight ahead." << std::endl;
    }
  }
  else
  {
    std::cout << "Go" << std::endl;
  }

  std::cout << std::endl;
  std::cout << "Police officer stops(less verbose)" << std::endl;

  if (green && !policeStop)
  {
    std::cout << "Go" << std::endl;
  }
  else
  {
    std::cout << "Stop" << std::endl;
  }

  return 0;
}