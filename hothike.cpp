#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x, t, d, mx;
  vector <int> v;

  cin >> n;

  for(int i=0; i<n; ++i) {
    cin >> x;
    v.push_back(x);
  }

  t = v[0];
  d = 0;

  for(int i=1; i<n; ++i) {
    if(v[i] > t) t = v[i];
  }

  for(int i=0; i<n-2; ++i) {
    mx = max(v[i], v[i+2]);

    if(mx < t) {
      d = i;
      t = mx;
    }
  }

  cout << ++d << ' ' << t << '\n';

  return 0;
}

