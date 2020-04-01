#include <iostream>
typedef short int sint;

sint x;

int main() {
  std::cin >> x;
  sint n[x];
  
  for(sint i=0; i<x; ++i) std::cin >> n[i];
  for(sint i=0; i<x; ++i) {
    if(n[i] % 2 == 0) std::cout << n[i] << " is even";
    else std::cout << n[i] << " is odd";
    std::cout << std::endl;
  }

  return 0;
}
