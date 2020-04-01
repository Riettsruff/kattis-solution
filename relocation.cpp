#include <iostream>
#include <vector>
using namespace std;
typedef unsigned int uint;

uint a, b, c, x, y, z;
vector <uint> t;

int main() {
  cin >> x >> y;

  for(uint i=0; i<x; ++i) {
    cin >> z;
    t.push_back(z);
  }

  while(y--) {
    cin >> a >> b >> c;

    if(a == 1) {
      t[b-1] = c;
    } else if(a == 2) {
      if(t[b-1] < t[c-1]) {
        cout << t[c-1] - t[b-1] << endl;
      } else if(t[b-1] > t[c-1]) {
        cout << t[b-1] - t[c-1] << endl;
      } else {
        cout << 0 << endl;
      }
    }
  }

  return 0;
}

