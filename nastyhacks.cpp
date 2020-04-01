#include <iostream>
typedef unsigned short int usint;

usint n;

int main() {
  std::cin >> n;

  while(n--) {
    int r, e, c;
    std::cin >> r >> e >> c;

    e -= c;

    if(e > r) std::cout << "advertise\n";
    else if(e < r) std::cout << "do not advertise\n";
    else std::cout << "does not matter\n";
  }

  return 0;
}

