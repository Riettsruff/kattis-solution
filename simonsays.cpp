#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
typedef unsigned short int usint;

string b, c;
usint n, lx, p;
vector<string> x;
vector<string> y;
bool exist = false;

int main() {
  cin >> n;
  cin.ignore();

  while(n--) {
    getline(cin, c);
    istringstream iss(c);

    while(getline(iss, b, ' ')) {
      x.push_back(b);
    }

    lx = x.size();
    
    for(usint i=0; i<lx; ++i) {
      if(x[i] == "Simon") {
        if(i < lx-2) {
          if(x[i+1] == "says") {
            p = i+2;
            exist = true;
            break;
          }
        }
      }
    }

    if(exist) {
      for(usint i=p; i<lx; ++i) {
        y.push_back(x[i] + " ");
        if(i == lx-1) {
          y.push_back("\n");
        }
      }
    }
    
    exist = false;
    x.clear();
  }

  for(auto it=y.begin(); it != y.end(); ++it) {
    cout << *it;
  }

  return 0;
}

