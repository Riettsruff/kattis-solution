#include <iostream>
using namespace std;

int main() {
  int n, x, y, z;

  cin >> n;

  while(n--) {
    z = 0;
    cin >> x >> y;

    while(y > 0) {
      if(y - (x * 2) > 0) {
        z += y - (x * 2);
      }

      x = y;
      cin >> y;
    }

    cout << z << "\n";
  }

  return 0;
}

