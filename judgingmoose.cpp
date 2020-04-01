#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint x, y;

int main() {
  cin >> x >> y;

  if(x == 0 && y == 0) cout << "Not a moose" << endl;
  else if(x == y) cout << "Even " << (x + y) << endl;
  else if(x > y) cout << "Odd " << (x * 2) << endl;
  else if(x < y) cout << "Odd " << (y * 2) << endl;

  return 0;
}
