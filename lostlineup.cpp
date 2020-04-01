#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint n, x;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  usint arr[n];
  arr[0] = 1;

  for(usint i=2; i<=n; ++i) {
    cin >> x;
    arr[++x] = i;
  }

  for(usint x : arr) cout << x << ' ';
  cout << '\n';

  return 0;
}

