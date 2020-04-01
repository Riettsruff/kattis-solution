#include <iostream>
using namespace std;

int x, y, n, p, o, z;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> x;
  while(x--) {
    cin >> y >> p;
    o = false;
    z = -1;
    for(int i=2; i<=y; ++i) {
      cin >> n;
      if(!o && n-p != 1) {
        o = true;
        z = i;
      }
      p = n;
    }
    cout << z << '\n';
  }

  return 0;
}

