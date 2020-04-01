#include <iostream>
using namespace std;
typedef unsigned short usint;

usint n, m, minX, maxX, x;

int main() {
  cin >> n;

  while(n--) {
    cin >> m;
    minX = 100;
    maxX = 0;

    while(m--) {
      cin >> x;

      if(x > maxX) maxX = x;
      if(x < minX) minX = x;
    }

    cout << (maxX - minX) * 2 << endl;
  }

  return 0;
}
