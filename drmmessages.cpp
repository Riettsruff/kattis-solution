#include <bits/stdc++.h>
using namespace std;
typedef unsigned int uint;

uint lx, s1 = 0, s2 = 0;
string x, x1, x2, nx1, nx2;

int main() {
  getline(cin, x);
  lx = x.size();
  x1 = x.substr(0, lx/2);
  x2 = x.substr(lx/2);

  for(uint i=0; i<x1.size(); ++i) {
    s1 += (x1[i] - 'A');
    s2 += (x2[i] - 'A');
  }

  for(uint i=0; i<x1.size(); ++i) {
    nx1 += char(((x1[i] + s1 - 'A') % 26) + 'A');
    nx2 += char(((x2[i] + s2 - 'A') % 26) + 'A');

    cout << char((nx1[i] + nx2[i]) % 26 + 'A');
  }

  return 0;
}
