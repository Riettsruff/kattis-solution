#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
typedef unsigned short int usint;

string e,s,t;
vector <char> x;
vector <string> y;
usint lx, ls, ly;

int main() {
  getline(cin, e);
  
  istringstream iss(e);
 
  while(getline(iss, s, ' ')) {
    ls = s.size();
    t = "";

    for(usint i=0; i<ls; ++i) {
      x.push_back(s[i]);

      if(s[i] == 'a' || s[i] == 'i' || s[i] == 'u' ||
         s[i] == 'e' || s[i] == 'o') {
        i += 2;
      }
    }
    
    for(auto it=x.begin(); it != x.end(); ++it) {
      t += *it;
    } 

    y.push_back(t);
    x.clear();
  }

  ly = y.size();

  for(usint i=0; i<ly; ++i) {
    cout << y[i];
    
    if(i == ly-1) cout << endl;
    else cout << " ";
  }
  
  return 0;
}

