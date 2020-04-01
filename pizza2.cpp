#include <iomanip>
#include <iostream>
using namespace std;

int R, C;
float x;

int main() {
  cin >> R >> C;
  x = (float) (R-C)*(R-C)/R/R;
  cout << setprecision(6) << fixed << x*100 << '\n';
  return 0;
}
