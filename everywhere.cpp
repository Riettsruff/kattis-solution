#include <iostream>
#include <string>
typedef unsigned short int usint;

usint n;
std::string result = "";

int main() {
  std::cin >> n;
 
  while(n--) {
    usint x, count = 0;
    std::cin >> x;
    std::string city[x];
    
    for(usint i=0; i<x; ++i) {
      std::cin >> city[i];
      count++;
      for(usint j=0; j<i; ++j) {
        if(city[j] == city[i]) {
          count--;
          break;
        }
      }
    }
    result += std::to_string(count) + "\n";
  }

  std::cout << result;
  return 0;
}
