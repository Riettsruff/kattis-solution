#include <iostream>
#include <iomanip>
#include <string>
typedef unsigned int uint;

std::string c;
uint whitespace = 0,
      lowercase = 0,
      uppercase = 0,
      symbol = 0;

int main() {
  std::cin >> c;
  uint lc = c.size();

  for(uint i=0; i<lc; ++i) {
    if(c[i] == 95) whitespace++;
    else if(c[i] > 96 && c[i] < 123) lowercase++;
    else if(c[i] > 64 && c[i] < 91) uppercase++;
    else symbol++;
  }

  std::cout << std::setprecision(10) << (float) whitespace/lc << std::endl;
  std::cout << std::setprecision(10) << (float) lowercase/lc << std::endl;
  std::cout << std::setprecision(10) << (float) uppercase/lc << std::endl;
  std::cout << std::setprecision(10) << (float) symbol/lc << std::endl;

  return 0;
}
