#include <iostream>
using namespace std;
typedef unsigned int uint;
typedef unsigned short int usint;

usint n, g, c;

int main() {
  cin >> n;

  for(usint i=0; i<n; ++i) {
    cin >> g;
    uint e[g];

    for(usint j=0; j<g; ++j) cin >> e[j];

    for(usint j=0; j<g; ++j) {
      c = 0;

      for(usint k=0; k<g; ++k) {
        if(j != k && e[j] != e[k]) c++;
      }
 
      if(c == g-1) {
        cout << "Case #" << (i+1) << ": " << e[j] << endl;
        break;
      }
    }
  }

  return 0;
}

