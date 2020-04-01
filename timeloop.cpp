#include <iostream>
typedef unsigned int uint;

uint x;

int main() {
  std::cin >> x;
  for(uint i=0; i<x; ++i)
    std::cout << (i+1) << " Abracadabra" << std::endl;

  return 0;
}
