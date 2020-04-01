#include <iostream>
#include <string>
typedef unsigned int uint;

uint x, y;

int main() {
  std::cin >> x;
  std::cin >> y;
  std::string arr[x];

  std::cin.ignore();
  
  for(uint i=0; i<x; ++i) {
    getline(std::cin, arr[i]);
  }

  std::cout << y << std::endl;

  return 0;
}

