#include <iostream>
#include <string>
typedef unsigned int uint;

std::string str;

int main() {
  getline(std::cin, str);
  uint length = str.length();
  
  std::cout << str[0];
  for(uint i=0; i<length; ++i) {
    if(str[i] == '-') std::cout << str[++i];
  }
  std::cout << std::endl;

  return 0;
}
