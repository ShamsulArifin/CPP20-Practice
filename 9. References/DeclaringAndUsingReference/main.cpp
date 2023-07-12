#include <iostream>

int main()
{
  int intData{33};
  double doubleData{55};

  //* references
  int &refIntData{intData};
  double &refDoubleData{doubleData};

  //* print data to terminal
  std::cout << "intData: " << intData << std::endl;
  std::cout << "&intData: " << &intData << std::endl;
  std::cout << "doubleData: " << doubleData << std::endl;
  std::cout << "&doubleData: " << &doubleData << std::endl;

  std::cout << "================================================" << std::endl;

  std::cout << "refIntData: " << refIntData << std::endl;
  std::cout << "&refIntData: " << &refIntData << std::endl;
  std::cout << "refDoubleData: " << refDoubleData << std::endl;
  std::cout << "&refDoubleData:" << &refDoubleData << std::endl;

  intData = 111;
  doubleData = 222.22;
  
  std::cout <<std::endl;
  std::cout << "========After main variable value changed=======" << std::endl;

  std::cout << "intData: " << intData << std::endl;
  std::cout << "&intData: " << &intData << std::endl;
  std::cout << "doubleData: " << doubleData << std::endl;
  std::cout << "&doubleData: " << &doubleData << std::endl;

  std::cout << "================================================" << std::endl;

  std::cout << "refIntData: " << refIntData << std::endl;
  std::cout << "&refIntData: " << &refIntData << std::endl;
  std::cout << "refDoubleData: " << refDoubleData << std::endl;
  std::cout << "&refDoubleData:" << &refDoubleData << std::endl;

  refIntData = 12012;
  refDoubleData = 98764.56;

  std::cout <<std::endl;
  std::cout << "========After ref variable value changed=======" << std::endl;

  std::cout << "intData: " << intData << std::endl;
  std::cout << "&intData: " << &intData << std::endl;
  std::cout << "doubleData: " << doubleData << std::endl;
  std::cout << "&doubleData: " << &doubleData << std::endl;

  std::cout << "================================================" << std::endl;

  std::cout << "refIntData: " << refIntData << std::endl;
  std::cout << "&refIntData: " << &refIntData << std::endl;
  std::cout << "refDoubleData: " << refDoubleData << std::endl;
  std::cout << "&refDoubleData:" << &refDoubleData << std::endl;

  return 0;
}