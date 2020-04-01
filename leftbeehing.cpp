#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint x, y;

int main() {
  while(true) {
    cin >> x >> y;

    if(x == 0 && y == 0) break;

    if(x + y == 13) cout << "Never speak again." << endl;
    else if(x == y) cout << "Undecided." << endl;
    else if(x > y) cout << "To the convention." << endl;
    else cout << "Left beehind." << endl;
  }

  return 0;
}
