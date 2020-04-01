#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned short int usint;

usint x[4];

int main() {
  for(usint i=0; i<4; ++i) cin >> x[i];

  sort(x, x+4);
  cout << x[0] * x[2] << endl;

  return 0;
}

