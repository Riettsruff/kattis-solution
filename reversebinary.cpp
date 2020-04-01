#include <iostream>
#include <string>
using namespace std;
typedef unsigned int uint;

uint x, ln, ans = 0;
string n;

uint pow(uint n, uint p) {
  if(p == 0) return 1;
  return n * pow(n, p-1);
}

int main() {
  cin >> x;

  while(x > 0) {
    if(x % 2 == 0) n += '0';
    else n += '1';
    
    x /= 2;
  }

  ln = n.size();

  for(uint i=0, j=ln-1; i<ln; ++i, --j) {
    ans += (n[i]-'0') * pow(2, j);
  }

  cout << ans << endl;

  return 0;
}
