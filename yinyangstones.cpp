#include <iostream>
using namespace std;

string x;
int n=0;
int m=0;

int main() {
  cin >> x;

  for(int i=0; i<x.size(); ++i) {
    if(x[i]=='W') ++n;
    else ++m;
  }

  cout << (n==m?1:0) << "\n";

  return 0;
}
