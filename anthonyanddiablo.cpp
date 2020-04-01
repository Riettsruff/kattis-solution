#include <iostream>
#include <cmath>
using namespace std;

double A, N, x, y;

int main() {
  cin >> A >> N;

  x = N / (M_PI * 2);
  y = M_PI * pow(x, 2);

  cout << (y >= A ? "Diablo is happy!" : "Need more materials!") << endl;

  return 0;
}

