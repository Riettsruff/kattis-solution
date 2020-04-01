#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
typedef unsigned short int usint;

usint n;
string x, y, a, l;
vector <string> fox;
vector <string> afox;

int main() {
  cin >> n;
  cin.ignore();

  while(n--) {
    getline(cin, x);
    istringstream iss(x);

    while(getline(iss, y, ' ')) {
      fox.push_back(y);
    }

    while(true) {
      getline(cin, a);

      if(a == "what does the fox say?") break;

      l = a.substr(a.find("goes")+5);
      afox.push_back(l);
    }

    for(usint i=0; i<fox.size(); ++i) {
      for(usint j=0; j<afox.size(); ++j) {
        if(fox[i] == afox[j]) break;
        else {
          if(j == afox.size()-1) cout << fox[i] << " ";
        }
      }
    }

    fox.clear();
    afox.clear();
  }

  return 0;
}

