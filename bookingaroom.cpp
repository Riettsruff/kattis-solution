#include <iostream>
#include <set>
using namespace std;
typedef unsigned short int usint;

usint x, y, z;
set <usint> room;
bool a = false;

int main() {
  cin >> x >> y;

  for(usint i=0; i<y; ++i) {
    cin >> z;
    room.insert(z);
  }

  for(usint i=1; i<=x; ++i) {
    if(!room.count(i)) {
      cout << i << endl;
      a = true;
      break;
    }
  }

  if(!a) cout << "too late" << endl;

  return 0;
}

