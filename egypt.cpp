#include <iostream>
typedef unsigned short int usint;
using namespace std;

usint a, b, c, t;

int main() {
  while(true) {
    cin >> a >> b >> c;

    if(a == 0 && b == 0 && c == 0) break;
    if(a > b) {
      t = a;
      a = b;
      b = t;
    }
    if(b > c) {
      t = b;
      b = c;
      c = t;
    }

    cout << (c * c == (a * a) + (b * b) ? "right" : "wrong") << endl;
  }

  return 0;
}

