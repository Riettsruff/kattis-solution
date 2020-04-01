#include <iostream>
using namespace std;
typedef unsigned short int usint;

int main() {
  int x, y;
  usint a,b;

  cin >> x;

  while(x--) {
    cin >> a >> b;
    cout << a;

    y=0;

    for(int i=1; i<=b; ++i) {
      y+=i;
    }

    cout << " " << y+b << "\n";
  }

  return 0;
}

