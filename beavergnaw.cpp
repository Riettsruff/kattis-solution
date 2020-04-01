#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
typedef unsigned int uint;

uint a, b;
float c, d;

int main() {
  for(;;) {
    cin >> a >> b;
   
    if(a == 0 && b == 0) break;

    c = pow(a, 3) - (6 * b / M_PI);
    d = pow(c, 1/3.0);

    cout << setprecision(10) << d << endl;
  }

  return 0;
}
