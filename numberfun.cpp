#include <iostream>
#include <string>
typedef unsigned short int usint;

usint n;
std::string result = "";

usint numberFun(usint a, usint b, usint c) {
  if(a + b == c) return 1;
  if(a - b == c) return 1;
  if(b - a == c) return 1;
  if(a * b == c) return 1;
  if(a / b == c && b * c == a) return 1;
  if(b / a == c && a * c == b) return 1;
  return 0;
}

int main() {
  std::cin >> n;
 
  while(n--) {
    usint a,b,c;
    std::cin >> a >> b >> c;
    result += (numberFun(a, b, c) ? "Possible\n" : "Impossible\n");
  }

  std::cout << result;

  return 0;
}

