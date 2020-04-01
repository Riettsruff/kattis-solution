#include <iostream>
using namespace std;
typedef unsigned short int usint;

int main() {
  int x;

  cin >> x;

  if(x%2==1) {
    cout << "Either" << "\n";
  } else {
    if((x/2)%2==0) {
      cout << "Even" << "\n";
    } else {
      cout << "Odd" << "\n";
    }
  }

  return 0;
}

