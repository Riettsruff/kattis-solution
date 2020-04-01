#include <iostream>
#include <algorithm>
typedef unsigned short int usint;

usint c[5][4];
usint g[5];
usint h[5];

int main() {
  for(usint i=0; i<5; ++i) {
    g[i] = 0;
    for(usint j=0; j<4; ++j) {
      std::cin >> c[i][j];
      g[i] += c[i][j];
    }
  }
  
  std::copy_n(g, 5, h);
  std::sort(g, g+5);
  
  for(usint i=0; i<5; ++i) {
    if(h[i] == g[4]) {
      std::cout << (++i) << " " << g[4] << std::endl;
      break;
    }
  }
  
  return 0;
}
