#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;
typedef unsigned short int usint;

string x, y;
vector <string> v;
vector <string> t;

int main() {
  while(true) {
    getline(cin, x);
    istringstream iss(x);

    if(x == "") break;

    while(getline(iss, y, ' ')) {
      t.push_back(y);

      for(usint i=0; i<y.size(); ++i) {
        if(y[i] >= 'A' && y[i] <= 'Z') {
          y[i] = char(y[i] + 32);
        }
      }

      if(find(v.begin(), v.end(), y) != v.end()) {
        t[t.size()-1] = ".";
      } else {
        v.push_back(y);
      }
    }

    for(usint i=0; i<t.size(); ++i) {
      cout << t[i] << " ";
    }

    cout << endl;
    t.clear();
  }

  return 0;
}
