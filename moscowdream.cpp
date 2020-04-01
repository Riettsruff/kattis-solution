#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint a, b, c, n;

int main() {
  cin >> a >> b >> c >> n;
  if(n >= 3 && a + b + c >= n && a >= 1 && b >= 1 && c >= 1) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}

