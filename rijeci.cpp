#include <iostream>
using namespace std;
typedef unsigned int uint;

uint n, temp;
uint a = 0, b = 1, c = 1, d = 1;

int main() {
  cin >> n;

  if(n == 1) {
    cout << a << " " << b << endl;
  } else if(n == 2) {
    cout << c << " " << d << endl;
  } else {
    for(uint i=2; i<n; ++i) {
      temp = a;
      a = c;
      c += temp;
      temp = b;
      b = d;
      d += temp;
    }

    cout << c << " " << d << endl;
  }

  return 0;
}

