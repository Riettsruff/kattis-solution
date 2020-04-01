#include <iostream>

int x, y;

int pow(int base, int n) {
  if(n == 0) return 1;
  return base * pow(base, n-1);
}

int main() {
  std::cin >> x;
  y = pow(2, x) + 1;
  y = pow(y, 2);
  
  std::cout << y << std::endl;
  return 0;
}

