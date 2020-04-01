#include <iostream>
#include <string>
using namespace std;
typedef unsigned short int usint;

usint a, b;
string c, d;

int main() {
  cin >> a >> b >> c >> d;

  c = string(b - a, ' ') + c; 

  for(usint i=b-1; i > a-1; --i) {
    c[i - a] = 'a' + (26 + d[i] - c[i]) % 26;
  }

  cout << c << endl;

  return 0;
}
