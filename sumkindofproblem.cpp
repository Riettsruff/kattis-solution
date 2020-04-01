#include <iostream>
using namespace std;
typedef unsigned int uint;

uint n, m;
uint a, b;

int main() {
  cin >> n;

  while(n--) {
    cin >> a >> b;
    m = b * b;
    cout << a << " " << ((m + b) >> 1) << " " <<
            m << " " << (m + b) << endl;
  }

  return 0;
}
