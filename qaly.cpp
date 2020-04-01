#include <iostream>
typedef unsigned int uint;

uint n;

int main() {
  std::cin >> n;
  float x[n*2], result = 0;

  for(uint i=0, j=0; i<n; ++i, j+=2) {
    std::cin >> x[j] >> x[j+1];
    result += x[j] * x[j+1];
  }

  std::cout << result << std::endl;

  return 0;
}

