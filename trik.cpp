#include <iostream>
#include <string>

typedef unsigned short int usint;

std::string s;
usint a=1,b=0,c=0;
usint t;

int main() {
  getline(std::cin, s);
  usint ls = s.length();
  
  for(usint i=0; i<ls; ++i) {
    if(s[i] == 'A') {
      t = a;
      a = b;
      b = t;
    } else if(s[i] == 'B') {
      t = b;
      b = c;
      c = t;
    } else if(s[i] == 'C') {
      t = c;
      c = a;
      a = t;
    }
  }

  if(a == 1) std::cout << 1;
  else if(b == 1) std::cout << 2;
  else if(c == 1) std::cout << 3;
  std::cout << std::endl;

  return 0;
}

