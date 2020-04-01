#include <iostream>
using namespace std;
typedef unsigned short int usint;

string x, y, ans;
usint s;

int main() {
  getline(cin, x);

  if(x.size() % 3 == 1) {
    y = "00";
    y += x;
  } else if(x.size() % 3 == 2) {
    y = "0";
    y += x;
  } else y = x;

  for(usint i=0; i<y.size(); i += 3) {
    s = 0;

    if(y[i] == '1') s += 4;
    if(y[i+1] == '1') s += 2;
    if(y[i+2] == '1') s += 1;

    ans += to_string(s);
  }

  cout << ans << endl;

  return 0;
}

