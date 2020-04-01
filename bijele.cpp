#include <iostream>
typedef short int sint;

sint a,b,c,d,e,f;

int main() {
  std::cin >> a >> b >> c >> d >> e >> f;

  std::cout << 1 - a << " ";
  std::cout << 1 - b << " ";
  std::cout << 2 - c << " ";  
  std::cout << 2 - d << " ";
  std::cout << 2 - e << " ";
  std::cout << 8 - f << std::endl;

  return 0;
}
