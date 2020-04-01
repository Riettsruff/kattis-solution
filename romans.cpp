#include <iostream>
using namespace std;
typedef unsigned int uint;

float x;
uint ans;

int main() {
  cin >> x;

  ans = x * (5280./4854.) * 1000. + 0.5;

  cout << ans << endl;

  return 0;
}

