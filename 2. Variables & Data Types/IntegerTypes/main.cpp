#include <iostream>

int main()
{
  // brace initializers
  int lionCount{};  // initializes to 0
  int dogCount{10}; // initializes to 10
  int catCount{15}; // initializes to 15

  // can use expression as initializer
  int domesticatedAnimals{dogCount + catCount};

  // int narrowingConversion{2.9};

  // functional initialization
  int fruitCart;
  int appleCount(5);
  int orangeCount(10);
  int fruitCount(appleCount + orangeCount);

  // assignment initialization
  int bikeCount = 2;
  int truckCount = 7;
  int vehicleCount = bikeCount + truckCount;

  std::cout << sizeof(fruitCount) << std::endl;

  return 0;
}