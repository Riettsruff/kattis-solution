#include <iostream>
#include <string>
typedef unsigned short int usint;

usint l, d, x, lsi, ans = 0;
std::string si;

int main() {
  std::cin >> l >> d >> x;

  for(usint i=l; i<=d; ++i) {
    ans = 0;
    si = std::to_string(i);
    lsi = si.size();
    
    for(usint j=0; j<lsi; ++j) {
      ans += (si[j] - '0');
    }

    if(ans == x) {
      std::cout << i << std::endl;
      break;
    }
  }

  for(usint i=d; i>=l; --i) {
    ans = 0;
    si = std::to_string(i);
    lsi = si.size();

    for(usint j=0; j<lsi; ++j) {
      ans += (si[j] - '0');
    }

    if(ans == x) {
      std::cout << i << std::endl;
      break;
    }
  }

  return 0;
}
