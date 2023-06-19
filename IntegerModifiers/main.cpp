#include <iostream>

int main()
{
  // can assign negative or positive values
  signed int value1{10};
  signed int value2{-300};

  // std::cout << "value1: " << value1 << std::endl;
  // std::cout << "value2: " << value2 << std::endl;
  // std::cout << "sizeof(value1): " << sizeof(value1) << std::endl;
  // std::cout << "sizeof(value2): " << sizeof(value2) << std::endl;

  // can assign only positive values
  unsigned int value3{4};
  // unsigned int value4 {-34};  //will occur compiler error

  // short and long
  short shortVar{-3242}; // 2 bytes in size
  short int shortInt{433};
  signed short signedShort{122};
  signed short int signedShortInt{-456};
  unsigned short int unsignedShortInt{456};

  int intVar{55}; // 4 bytes in size
  signed signedVar{66};
  signed int signedInt{77};
  unsigned int unsignedInt{77};

  long longVar{88}; // 4 or 8 bytes in size
  long int longInt{33};
  signed long signedLong{44};
  signed long int signedLongInt{56};
  unsigned long int unsignedLongInt{76};

  long long longLong{767}; // 8 bytes in size
  long long int longLongInt{534};
  signed long long signedLongLong{5433};
  signed long long int signedLongLongInt{1234};
  unsigned long long int unsignedLongLongInt{12343243};

  std::cout << "Short Variable: " << shortVar << ", size: " << sizeof(shortVar) << " bytes" << std::endl;
  std::cout << "Short Int: " << shortInt << ", size: " << sizeof(shortInt) << " bytes" << std::endl;
  std::cout << "Signed Short: " << signedShort << ", size: " << sizeof(signedShort) << " bytes" << std::endl;
  std::cout << "Signed Short Int: " << signedShortInt << ", size: " << sizeof(signedShortInt) << " bytes" << std::endl;
  std::cout << "Unsigned Short Int: " << unsignedShortInt << ", size: " << sizeof(unsignedShortInt) << " bytes" << std::endl;
  std::cout << "------------------------------------------" << std::endl;

  std::cout << "Integer variable: " << intVar << ", size: " << sizeof(intVar) << " bytes" << std::endl;
  std::cout << "Signed variable: " << signedVar << ", size: " << sizeof(signedVar) << " bytes" << std::endl;
  std::cout << "Signed Int variable: " << signedInt << ", size: " << sizeof(signedInt) << " bytes" << std::endl;
  std::cout << "Unsigned Integer variable: " << unsignedInt << ", size: " << sizeof(unsignedInt) << " bytes" << std::endl;
  std::cout << "------------------------------------------" << std::endl;

  std::cout << "Long Variable: " << longVar << ", size: " << sizeof(longVar) << " bytes" << std::endl;
  std::cout << "Long integer: " << longInt << ", size: " << sizeof(longInt) << " bytes" << std::endl;
  std::cout << "Signed Long: " << signedLong << ", size: " << sizeof(signedLong) << " bytes" << std::endl;
  std::cout << "Signed Long integer: " << signedLongInt << ", size: " << sizeof(signedLongInt) << " bytes" << std::endl;
  std::cout << "Unsigned Long integer: " << unsignedLongInt << ", size: " << sizeof(unsignedLongInt) << " bytes" << std::endl;
  std::cout << "------------------------------------------" << std::endl;

  std::cout << "Long Long: " << longLong << ", size: " << sizeof(longLong) << " bytes" << std::endl;
  std::cout << "Long Long integer: " << longLongInt << ", size: " << sizeof(longLongInt) << " bytes" << std::endl;
  std::cout << "Signed Long Long: " << signedLongLong << ", size: " << sizeof(signedLongLong) << " bytes" << std::endl;
  std::cout << "Signed Long Long integer: " << signedLongLongInt << ", size: " << sizeof(signedLongLongInt) << " bytes" << std::endl;
  std::cout << "Unsigned Long Long integer: " << unsignedLongLongInt << ", size: " << sizeof(unsignedLongLongInt) << " bytes" << std::endl;
  std::cout << "------------------------------------------" << std::endl;

  return 0;
}