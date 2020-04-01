#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint n;

int main() {
  cin >> n;
  cout << (1 << n) - n - 1 << endl;

  return 0;
}

