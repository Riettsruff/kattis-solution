#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int x;
  cin >> x;
  cout << x*(x-1)*(x-2)*(x-3)/24 << '\n';

  return 0;
}

