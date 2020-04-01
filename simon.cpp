#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
typedef unsigned short int usint;

usint n, lt;
string s, y;
vector <string> t;

int main() {
  cin >> n;
  cin.ignore();

  while(n--) {
    getline(cin, s);
    istringstream iss(s);
    
    while(getline(iss, y, ' ')) {
      t.push_back(y);
    }

    lt = t.size();

    for(usint i=0; i<lt; ++i) {
      if(t[i] == "simon") {
        if(i < lt-2) {
          if(t[i+1] == "says") {
            for(usint j=i+2; j<lt; ++j) {
              cout << t[j] << " ";
            }
            
            cout << endl;
            t.clear();
            break;
          }
        }
      }
    }

    if(!t.empty()) {
      cout << endl;
      t.clear();
    }
  }

  return 0;
}

