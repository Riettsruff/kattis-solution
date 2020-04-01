#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint r,c,zr,zc;

int main() {
  cin >> r >> c >> zr >> zc;

  char moja[r][c];

  for(usint i=0; i<r; ++i) {
    for(usint j=0; j<c; ++j) {
      cin >> moja[i][j];
    }
  }

  for(usint i=0; i<r; ++i) {
    for(usint j=0; j<zr; ++j) {
      for(usint k=0; k<c; ++k) {
        for(usint l=0; l<zc; ++l) {
          cout << moja[i][k];
        }
      }
      cout << endl;
    }
  }

  return 0;
}

