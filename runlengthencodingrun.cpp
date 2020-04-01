#include <iostream>
using namespace std;
typedef unsigned short int usint;

string x,y;
usint ly, c=1;

int main() {
  cin >> x >> y;
  ly = y.size();

  if(x == "E") {
    for(usint i=0; i<ly; ++i) {
      if(i+1 < ly && y[i] == y[i+1]) c++;
      else {
        cout << y[i] << c;
        c = 1;
      }
    }
  } else if(x == "D") {
    for(usint i=0; i<ly; i+=2) {
      for(usint j=0; j<y[i+1]-'0'; ++j) cout << y[i];
    }
  }

  cout << endl;

  return 0;
}

