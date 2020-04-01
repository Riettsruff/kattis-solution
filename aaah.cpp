#include <iostream>
#include <string>
using namespace std;
typedef unsigned short int usint;

string x, y;

int main() {
  cin >> x >> y;

  if(x.size() >= y.size()) cout << "go" << endl;
  else cout << "no" << endl;

  return 0;
}

