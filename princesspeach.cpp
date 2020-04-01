#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
typedef unsigned short int usint;

usint n, y, k;
set <usint> s;

int main() {
  cin >> n >> y;

  while(y--) {
    cin >> k;
    s.insert(k);
  }

  for(usint i=0; i<n; ++i) {
    if(count(s.begin(), s.end(), i) > 0) continue;
    else cout << i << endl;
  }

  cout << "Mario got " << s.size() << " of the dangerous obstacles." << endl;

  return 0;
}

