#include <iostream>
using namespace std;
typedef unsigned int uint;

uint w, n, x, y, r;

int main() {
  cin >> w >> n;

  while(n--) {
    cin >> x >> y;
    
    r += (x * y);
  }

  cout << r/w << endl;

  return 0;
}

