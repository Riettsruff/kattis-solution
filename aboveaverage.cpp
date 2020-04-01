#include <iostream>
#include <iomanip>
using namespace std;
typedef unsigned short int usint;

usint n, m, t;
double a;

int main() {
  cin >> n;

  while(n--) {
    cin >> m;
    a = t = 0;
    usint grade[m];

    for(usint i=0; i<m; ++i) {
      cin >> grade[i];
      a += grade[i];
    }

    a /= m;

    for(usint i=0; i<m; ++i) {
      if(grade[i] > a) t++;
    }

    cout << fixed << setprecision(3) << (double) t / m * 100 << "%" << endl;
  }

  return 0;
}

