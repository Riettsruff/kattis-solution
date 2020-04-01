
#include <iostream>
#include <string>
using namespace std;
typedef unsigned int uint;

uint m, n, a, b;
string o;

int main() {
  cin >> n;

  while(n) {  
    a = b = 0;
    for(uint i=0; i<n; ++i) {
      cin >> o >> m;

      if(o == "DROP") {
        a += m;
        cout << "DROP 2 " << m << endl;
      } else {
        if(m > b) {
          if(b > 0) {
            cout << "TAKE 1 " << b << endl;
            m -= b;
            b = 0;
          }

          cout << "MOVE 2->1 " << a << endl;
          cout << "TAKE 1 " << m << endl;
          b = a - m;
          a = 0;
        } else { 
          b -= m;
          cout << "TAKE 1 " << m << endl;
        }
      }
    }

    cin >> n;

    if(n > 0) cout << endl;
  }

  return 0;
}

