#include <iostream>

typedef unsigned short int usint;

usint n;
int result = 0;

int pow(usint a, usint b) {
  if(b == 0) return 1;
  if(b == 1) return a;
  return a * pow(a, b-1);
}

int main() {
  std::cin >> n;
  usint m;

  for(usint i=0; i<n; ++i) {
    std::cin >> m;
    usint base = m / 10;
    usint lastElem = m % 10;
  
    result += pow(base, lastElem);
  }

  std::cout << result << std::endl;

  return 0;
}
