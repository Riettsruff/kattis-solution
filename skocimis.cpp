#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint a, b, c;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> a >> b >> c;
  usint m = max(b-a, c-b);
  cout << --m << '\n';

  return 0;
}

