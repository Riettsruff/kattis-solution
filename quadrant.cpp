#include <iostream>

int x,y;

int main() {
  std::cin >> x >> y;
  
  if(x > 0 && y > 0)
    std::cout << 1;
  else if(x < 0 && y > 0)
    std::cout << 2;
  else if(x < 0 && y < 0)
    std::cout << 3;
  else if(x > 0 && y < 0)
    std::cout << 4;
  std::cout << std::endl;
  
  return 0;
}
