#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double maxArea(float a, float b, float c, float d) {
  double semiperimeter = (a + b + c + d) / 2;

  return sqrt((semiperimeter - a) *
              (semiperimeter - b) *
              (semiperimeter - c) *
              (semiperimeter - d));
}

int main() {
  float a, b, c, d;

  cin >> a >> b >> c >> d;
  cout << setprecision(16) << maxArea(a, b, c, d) << '\n';

  return 0;
}

