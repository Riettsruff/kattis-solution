#include <iostream>
#include <vector>
using namespace std;
typedef unsigned short int usint;

int main() {
  usint n, cw, cb, rw, rb;
  string s;
  bool fail = false;
  vector <string> x;

  cin >> n;

  while(n--) {
    cin >> s;
    x.push_back(s);
  }

  for(int i=0; i<x.size(); ++i) {
    cw = cb = rw = rb = 0;

    for(int j=0; j<x.size(); ++j) {
      switch(x[i][j]) {
        case 'W': ++cw;
        break;
        case 'B': ++cb;
        break;
      }

      switch(x[j][i]) {
        case 'W': ++rw;
        break;
        case 'B': ++rb;
        break;
      }

      if(j+2 < x.size()) {
        if((x[i][j] == x[i][j+1] && x[i][j] == x[i][j+2]) ||
           (x[j][i] == x[j+1][i] && x[j][i] == x[j+2][i])) {
          fail = true;
          goto c;
        }
      }
    }

    if(cw != cb || rw != rb) {
      fail = true;
      break;
    }
  }

  c:
  cout << (fail ? 0 : 1) << "\n";

  return 0;
}

