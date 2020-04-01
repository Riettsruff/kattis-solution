#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float x_, y_, x__, y__, p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  while(cin >> x_ >> y_ >> x__ >> y__ >> p) {
    cout << setprecision(10) << fixed
         << pow(pow(abs(x_-x__), p) + pow(abs(y_-y__), p), 1/p) << '\n';
  }

  return 0;
}
