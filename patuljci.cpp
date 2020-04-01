#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint num[9], tot;

int main() {
  for(usint i=0; i<9; ++i) {
    cin >> num[i];
    tot += num[i];
  }

  for(usint i=0; i<8; ++i) {
    for(usint j=i+1; j<9; ++j) {
      if(tot - num[i] - num[j] == 100) {
        for(usint k=0; k<9; ++k) {
          if(k == i || k == j) continue;
          else cout << num[k] << endl;
        }

        return 0;
      }
    }
  }

  return 0;
}

