#include <iostream>
typedef unsigned short int usint;

usint x, y, n;

int main() {
  std::cin >> x >> y >> n;

  for(usint i=1; i<=n; ++i) {
    if(i % x == 0) std::cout << "Fizz";
    if(i % y == 0) std::cout << "Buzz";
    if(i % x != 0 && i % y != 0) std::cout << i;
    std::cout << std::endl;
  }
  return 0;
}
