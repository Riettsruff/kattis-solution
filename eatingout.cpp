#include <iostream>
using namespace std;
typedef unsigned int uint;

uint m,a,b,c;

int main() {
  cin >> m >> a >> b >> c;

  if(a + b + c > 2 * m) cout << "impossible" << endl;
  else cout << "possible" << endl;

  return 0;
}

