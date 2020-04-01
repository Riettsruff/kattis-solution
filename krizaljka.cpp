#include <iostream>
#include <string>
using namespace std;
typedef unsigned short int usint;

string x, y;
usint x1, x2;
bool same = false;

int main() {
  cin >> x >> y;

  for(usint i=0; i<x.size(); ++i) {
    for(usint j=0; j<y.size(); ++j) {
      if(x[i] == y[j]) {
        x1 = j;
        x2 = i;
        same = true;
        break;
      }
    }

    if(same) break;
  }

  for(usint i=0; i<y.size(); ++i) {
    if(i == x1) {
      cout << x << endl;
      continue;
    }

    for(usint j=0; j<x.size(); ++j) {
      cout << (j == x2 ? y[i] : '.');
    }

    cout << endl;
  }

  return 0;
}

