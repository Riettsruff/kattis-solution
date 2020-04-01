#include <iostream>
using namespace std;
typedef unsigned short int usint;

int main() {
  string x;
  int a = 0, b = 0;

  cin >> x;

  for(int i=0; i<x.size(); ++i) {
    switch(x[i]) {
      case 'A': ++a;
      break;
      case 'B': ++b;
      break;
    }
  }

  cout << (a >= b ? "A\n" : "B\n");

  return 0;
}
