#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef unsigned short int usint;

usint n;
string s, m;
vector <string> x;
vector <string> y;
vector <string>::iterator it;

int main() {
  cin >> n;

  while(n--) {
    cin >> s >> m;
    
    if(s == "entry") {
      if(x.size() > 0) {
        it = std::find(x.begin(), x.end(), m);
        
        if(it != x.end()) {
          y.push_back(m + " entered (ANOMALY)\n");
        } else {
          x.push_back(m);
          y.push_back(m + " entered\n");
        }
      } else {
        x.push_back(m);
        y.push_back(m + " entered\n");
      }
    } else if(s == "exit") {
      it = find(x.begin(), x.end(), m);
    
      if(it != x.end()) {
        x.erase(it);
        y.push_back(m + " exited\n");
      } else {
        y.push_back(m + " exited (ANOMALY)\n");
      }
    }
  }

  for(auto it=y.begin(); it != y.end(); ++it) {
    cout << *it;
  }

  return 0;
}

