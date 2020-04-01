#include <iostream>
#include <string>
using namespace std;
typedef unsigned short int usint;

usint n, lx;
string x, y, z;

int main() {
  cin >> n;
  cin.ignore();

  while(n--) {
    getline(cin, x);
    y = z = "";
    lx = x.size();

    if(x == "P=NP") {
      cout << "skipped" << endl;
      continue;
    }

    for(usint i=0; i<lx; ++i) {
      if(x[i] == '+') {
        for(usint j=i+1; j<lx; ++j) {
          z += x[j];
        }
        break;
      } else {
        y += x[i];
      }
    }

    cout << stoi(y) + stoi(z) << endl;
  }

  return 0;
}
