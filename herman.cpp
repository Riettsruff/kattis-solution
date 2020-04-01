#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double x;

  cin >> x;
  cout << fixed << setprecision(6) << M_PI * x * x << "\n";
  cout << fixed << setprecision(6) << pow((x * 2), 2) / 2 << "\n";

  return 0;
}

