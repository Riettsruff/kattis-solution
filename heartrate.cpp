#include <iostream>
typedef unsigned short int usint;

usint n;

int main() {
  std::cin >> n;
  
  while(n--) {
    double x, y; 
    std::cin >> x >> y;

    std::cout << std::fixed;
    std::cout.precision(4);

    std::cout << 60 * (x / y) - (60 / y) << " ";
    std::cout << 60 * (x / y) << " ";
    std::cout << 60 * (x / y) + (60 / y) << std::endl;
  }

  return 0;
}
