#include <iostream>
#include <set>
using namespace std;
typedef unsigned short int usint;

int main() {
  usint x, y, z;
  set <usint> s;

  cin >> x;

  while(x--) {
    cin >> y >> z;

    for(usint i=y; i<=z; ++i) {
      s.insert(i);
    }
  }

  cout << s.size() << "\n";

  return 0;
}

