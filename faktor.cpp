#include <iostream>
typedef unsigned short int usint;

usint a, b;

int main() {
  std::cin >> a >> b;
  std::cout << a * (b - 1) + 1 << std::endl;
  return 0;
}
