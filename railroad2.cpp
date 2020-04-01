#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint x, y;

int main() {
  cin >> x >> y;
  cout << (y % 2 == 0 ? "possible" : "impossible") << endl;
}
