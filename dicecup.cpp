#include <iostream>
typedef unsigned short int usint;

usint n, m;

int main() {
  std::cin >> n >> m;
  
  if(n == m) {
    std::cout << ++n << std::endl;
  } else if(n < m) { 
    n++;
    m++;
    while(n <= m) {
      std::cout << n << std::endl;
      n++;
    }
  } else {
    n++;
    m++;
    while(m <= n) {
      std::cout << m << std::endl;
      m++;
    }
  }

  return 0;
}
