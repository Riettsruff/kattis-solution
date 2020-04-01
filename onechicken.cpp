#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint x, y;

int main() {
  cin >> x >> y;

  if(x < y) {
    cout << "Dr. Chaz will have " << (y-x) << 
            (y-x == 1 ? " piece" : " pieces") <<
            " of chicken left over!" << endl;
  } else {
    cout << "Dr. Chaz needs " << (x-y) << " more " <<
            (x-y == 1 ? "piece" : "pieces") << " of chicken!" << endl;
  }

  return 0;
}
