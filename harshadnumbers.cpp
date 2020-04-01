#include <iostream>
using namespace std;
typedef unsigned int uint;

uint n;

uint sumDigit(uint x) {
  uint sum = 0;

  while(x > 0) {
    sum += x % 10;
    x /= 10;
  }
  
  return sum;
}

int main() {
  cin >> n;

  if(n % sumDigit(n) == 0) {
    cout << n << endl;
  } else {
    while(n++) {
      if(n % sumDigit(n) == 0) {
        cout << n << endl;
        break;
      }
    }
  }

  return 0;
}

