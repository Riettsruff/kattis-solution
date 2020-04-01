#include <iostream>
#include <iomanip>
using namespace std;
typedef unsigned short int usint;

usint n;

int main() {
  cin >> n;
  long double x=1;
  long double res=0;
  for(usint i=1; i<=n+1; ++i) {
    res += 1/x;
    x *= i;
  }
  cout << setprecision(16) << fixed << res << '\n';

  return 0;
}

