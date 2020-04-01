#include <iostream>
using namespace std;

int n, a, day = -1, least = -1;

int main() {
  cin >> n;

  if(n == 0) return 0;

  for(uint i=0; i<n; ++i) {
    cin >> a;
    
    if(least == -1 || a < least) {
      least = a;
      day = i;
    }
  }

  cout << day << endl;

  return 0;
}
