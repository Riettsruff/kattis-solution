#include <iostream>

typedef short int sint;

sint h, m;

int main() {
  std::cin >> h >> m;

  m -= 45;

  if(m < 0) {
    m += 60;
    --h;
    if(h < 0) {
      h += 24;
    }
  }

  std::cout << h << " " << m << std::endl;

  return 0;
}
