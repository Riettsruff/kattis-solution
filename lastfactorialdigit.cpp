#include <iostream>
typedef unsigned short int usint;

usint n;

usint factorial(usint x) {
  if(x == 1) return 1;
  return x * factorial(x-1);
}

int main() {
  std::cin >> n;

  while(n--) {
    usint x;
    std::cin >> x;
    std::cout << factorial(x) % 10 << std::endl;
  }

  return 0;
}
