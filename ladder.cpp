#include <iostream>
#include <cmath>
using namespace std;

int h, a;

int main() {
  cin >> h >> a;
  double r = a*(M_PI/180);
  cout << ceil(h/sin(r)) << '\n';

  return 0;
}

