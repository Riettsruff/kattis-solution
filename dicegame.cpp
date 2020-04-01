#include <iostream>
using namespace std;

int a, b, x;
float y, z;

int main() {
  cin >> a >> b;
  x = a + b;
  cin >> a >> b;
  x += a + b;
  y = (float) x/2;
  cin >> a >> b;
  x = a + b;
  cin >> a >> b;
  x += a + b;
  z = (float) x/2;
  if(y > z) cout << "Gunnar\n";
  else if(y < z) cout << "Emma\n";
  else cout << "Tie\n";

  return 0;
}

