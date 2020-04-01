#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x,y=0,z;

  cin >> x;

  while(x--) {
    cin >> z;

    if(z < 0) y += abs(z);
  }

  cout << y << "\n";

  return 0;
}


