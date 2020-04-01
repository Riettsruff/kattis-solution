#include <iostream>
#include <string>
typedef unsigned short int usint;

usint n, ls;
std::string s[2];

int main() {
  std::cin >> n;
  std::cin.ignore();
  
  while(n--) {
    getline(std::cin, s[0]);
    getline(std::cin, s[1]);
    
    ls = s[0].length();
    
    std::cout << s[0] << std::endl;
    std::cout << s[1] << std::endl;
    
    for(usint i=0; i<ls; ++i) {
      if(s[0][i] == s[1][i]) std::cout << ".";
      else std::cout << "*";
    }
    std::cout << std::endl << std::endl;
  }

  return 0;
}
