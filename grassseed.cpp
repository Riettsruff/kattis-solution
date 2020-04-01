#include <iostream>
typedef unsigned short int usint;

usint n;
double c, result = 0;

int main() {
  std::cin >> c >> n;

  while(n--) {
    double a, b;
    std::cin >> a >> b;
    result += a * b;
  }

  result *= c;

  std::cout << std::fixed;
  std::cout.precision(7);
  std::cout << result << std::endl;

  return 0;
}
