#include <iostream>
#include <set>
using namespace std;
typedef unsigned short int usint;

int main() {
  usint p, n, d = 0;
  string x;
  bool r = false;
  set <string> s;

  cin >> p >> n;

  for(usint i=0; i<n; ++i) {
    cin >> x;
    s.insert(x);

    if(!r && s.size() == p) {
      d = i+1;
      r = true;
    }
  }

  if(r) {
    cout << d << '\n';
  } else {
    cout << "paradox avoided\n";
  }

  return 0;
}

