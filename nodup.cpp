#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
typedef unsigned short int usint;

string s, x;
usint lc;
vector <string> c;
bool repeated = false;

int main() {

  getline(cin, s);
  stringstream ss(s);
 
  while(getline(ss, x, ' ')) {
    c.push_back(x);
  }

  lc = c.size();

  for(usint i=0; i<lc; ++i) {
    for(usint j=i+1; j<lc; ++j) {
      if(c[i] == c[j]) {
        repeated = true;
        break;
      }
    }
  }

  if(repeated) cout << "no" << endl;
  else cout << "yes" << endl;

  return 0;
}
