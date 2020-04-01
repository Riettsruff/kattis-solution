#include <iostream>
typedef unsigned int uint;

uint x;

int main() {
  std::cin >> x;
  if(x % 2 == 0) std::cout << "Bob";
  else std::cout << "Alice";
  std::cout << std::endl; 
  return 0;
}
