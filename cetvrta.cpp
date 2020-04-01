#include <iostream>
typedef unsigned short int usint;

usint a,b,c,d,e,f;

int main() {
  std::cin >> a >> b >> c >> d >> e >> f;
  
  if(a == c) {
    std::cout << e;
  } else if(a == e) {
    std::cout << c;
  } else if(c == e) {
    std::cout << a;
  } else {
    std::cout << a;
  }

  std::cout << " ";

  if(b == d) {
    std::cout << f;
  } else if(b == f) {
    std::cout << d; 
  } else if(d == f) {
    std::cout << b;
  } else {
    std::cout << b;
  }

  std::cout << std::endl;

  return 0;
}
