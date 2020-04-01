#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
typedef unsigned short int usint;

usint n, t=0;
string x, y;
vector <string> v;
vector <usint> r;

int main() {
  cin >> n;
  cin.ignore();

  while(n) {
    for(usint k=0; k<n; ++k) {
      getline(cin, x);
      istringstream iss(x);

      while(getline(iss, y, ' ')) {
        v.push_back(y);
      }
      
      if(v.front() == ".") {
        for(usint i=1; i<v.size(); ++i) {
          t += stoi(v[i]);

          if(i % 2 == 1) {
            for(usint j=0; j<stoi(v[i]); ++j) {
              cout << '.';
            }
          } else {
            for(usint j=0; j<stoi(v[i]); ++j) {
              cout << '#';
            }
          }
        }
      } else {
        for(usint i=1; i<v.size(); ++i) {
          t += stoi(v[i]);

          if(i % 2 == 1) {
            for(usint j=0; j<stoi(v[i]); ++j) {
              cout << '#';
            }
          } else {
            for(usint j=0; j<stoi(v[i]); ++j) {
              cout << '.';
            }
          }
        }
      }

      r.push_back(t);
      v.clear();
      t = 0;
      cout << endl;
    }

    if(count(r.begin(), r.end(), r.front()) != n) {
      cout << "Error decoding image" << endl;
    }

    r.clear();
    cin >> n;
    cin.ignore();

    if(n != 0) cout << endl;
  }

  return 0;
}

