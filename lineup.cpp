#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned short int usint;

usint n, ex, in, de;
vector <string> x;
vector <string> y;
string s;

int main() {
  cin >> n;
  cin.ignore();

  while(n--) {
    getline(cin, s);
    x.push_back(s);
    y.push_back(s);
  }

  in = de = 0;
  ex = x.size();
  sort(x.begin(), x.end());

  for(usint i=0; i<ex; ++i) {
    if(x[i] == y[i]) ++in;
  }

  if(in == ex) {
    cout << "INCREASING" << endl;
    return 0;
  }

  sort(x.begin(), x.end(), greater<string>());

  for(usint i=0; i<ex; ++i) {
    if(x[i] == y[i]) ++de;
  }

  if(de == ex) cout << "DECREASING" << endl;
  else cout << "NEITHER" << endl;

  return 0;
}

