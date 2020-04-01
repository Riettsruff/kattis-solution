#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint a, b, c, d, e;

int main() {
  cin >> a >> b >> c;

  d = a + b;
  e = 0;

  while(d >= c) {
    d -= c;
    e++;
    d++;
  }

  cout << e << endl;

  return 0;
}
