#include <iostream>
#include <string>
typedef unsigned short int usint;

std::string s;
bool isHiss = false;

int main() {
  std::cin >> s;
  usint ls = s.length();
  
  for(usint i=0; i<ls; ++i) {
    if(s[i] == 's') {
      if(s[i+1] == 's') {
        isHiss = true;
        break;
      }
    }
  }
  
  std::cout << (isHiss ? "hiss" : "no hiss") << std::endl;

  return 0;
}

