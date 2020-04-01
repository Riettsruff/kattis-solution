#include <iostream>
#include <math.h>

typedef unsigned int uint;

uint n, w, h;

int main() {
  std::cin >> n >> w >> h;

  int x[n];
  int fit = sqrt((w*w)+(h*h));

  for(uint i=0; i<n; ++i) {
    std::cin >> x[i];
  }

  for(uint i=0; i<n; ++i) {
    std::cout << (x[i] > fit ? "NE" : "DA") << std::endl;
  }

  return 0;
}
