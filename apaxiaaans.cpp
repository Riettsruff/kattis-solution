#include <iostream>
#include <string>
typedef unsigned short int usint;

std::string c;

int main() {
  getline(std::cin, c);
  usint lc = c.length(); 

  for(usint i=0; i<lc; ++i) {
    if(c[i] != c[i+1]) std::cout << c[i];
  }

  std::cout << std::endl;

  return 0;
}

