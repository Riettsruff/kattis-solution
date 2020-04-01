#include <iostream>

typedef unsigned short int usint;

usint n, result = 0;

int main() {
  std::cin >> n;
  int t[n];

  while(n--) {
    std::cin >> t[n];
    if(t[n] < 0) result++;
  }

  std::cout << result << std::endl;

  return 0;
}
