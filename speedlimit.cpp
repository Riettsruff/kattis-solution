#include <iostream>
using namespace std;
typedef short int sint;

sint n, x, y, z, ans;

int main() {
  while(true) {
    cin >> n;
    ans = z = 0;
 
    if(n == -1) break;

    while(n--) {
      cin >> x >> y;
      ans += x * (y-z);
      z = y;
    }
    
    cout << ans << " miles" << endl;
  }

  return 0;
}

