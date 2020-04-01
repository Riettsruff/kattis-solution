#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint n, same, diff;
string x, y;

int main() {
  cin >> n;
  cin.ignore();

  cin >> x >> y;

  for(usint i=0; i<x.size(); ++i) {
    if(x[i] == y[i]) same++;
    else diff++;
  }

  cout << (n > same ? x.size() - (n - same) : n + diff) << endl;

  return 0;
}


