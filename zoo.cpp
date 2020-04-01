#include <iostream>
#include <vector>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;
typedef unsigned short int usint;

usint n, c = 1;
string x, y;
vector <string> v;
vector <string> tmp;
set <string> w;

int main() {
  while(true) {
    cin >> n;
    cin.ignore();

    if(n == 0) break;

    while(n--) {
      getline(cin, x);
      istringstream iss(x);

      while(getline(iss, y, ' ')) {
        tmp.push_back(y);
      }

      tmp.erase(tmp.begin(), tmp.end()-1);

      for(usint i=0; i<tmp.front().size(); ++i) {
        if(tmp.front()[i] >= 'A' && tmp.front()[i] <= 'Z') {
          tmp.front()[i] = char(tmp.front()[i]+32);
        }
      }

      v.push_back(tmp.front());
      w.insert(tmp.front());
      tmp.clear();
    }

    cout << "List " << c++ << ":\n";

    for(auto it=w.begin(); it != w.end(); ++it) {
      cout << *it << " | " << count(v.begin(), v.end(), *it) << endl;
    }

    v.clear();
    w.clear();
  }

  return 0;
}

