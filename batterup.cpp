#include <iostream>
typedef short int sint;

sint n, w = 0, t;
float result = 0;

int main() {
  std::cin >> n;
  while(n--) {
    std::cin >> t;
    if(t != -1) {
      w++;
      result += t;
    }
  }
 
  std::cout << result/w << std::endl;

  return 0;
}
