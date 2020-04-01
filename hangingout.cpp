#include <iostream>
#include <string>
typedef unsigned short int usint;

char option[6];
usint x, y;
usint n;
usint count = 0, fail = 0;

int main() {
  std::cin >> x >> y;

  while(y--) {
    std::cin >> option >> n;
    
    if((std::string) option == "enter") {
      if(count + n <= x) count += n;
      else fail++;
    } else if((std::string) option == "leave") {
      count -= n;
    }
  }

  std::cout << fail << std::endl;

  return 0;
}

