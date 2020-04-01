#include <iostream>
using namespace std;
typedef unsigned int uint;

uint x, k, b, n, ans;

int main() {
  cin >> x;
  
  while(x--) {
    cin >> k >> b >> n;
    ans = 0;
    
    while(n > 0) {
      ans += (n % b) * (n % b);
      n /= b;
    }
    
    cout << k << " " << ans << endl;
  }
  
  return 0;
}
