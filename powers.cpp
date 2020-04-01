#include <iostream>
#include <cmath>
typedef unsigned long long ull;
typedef unsigned int usint;
using namespace std;

ull myPowerMod(ull x, usint y, ull z) {
  ull res = 1;
  while(y > 0) {
    res = (res * x) % z;
    y >>= 1;
    x = (x * x) % z;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  ull a;
  usint b;
  cin >> a >> b;

  a = myPowerMod(a*(a+1)/2, b, a);
  cout << a << '\n';

  return 0;
}

