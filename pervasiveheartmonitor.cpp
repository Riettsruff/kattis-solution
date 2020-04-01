#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
using namespace std;
typedef unsigned short int usint;

string x, y;
vector <string> a;
vector <float> b;
double c;

int main() {
  while(true) {
    getline(cin, x);
    istringstream iss(x);

    if(x == "") break;

    while(getline(iss, y, ' ')) {
      if(y[0] >= 'A' && y[0] <= 'Z') a.push_back(y);
      else b.push_back(stof(y));
    }

    for(usint i=0; i<b.size(); ++i) {
      c += b[i];
    }

    cout << fixed << setprecision(6) << c/b.size() << " ";
    
    for(usint i=0; i<a.size(); ++i) {
      cout << a[i] << " ";
    }

    cout << endl;
    a.clear();
    b.clear();
    c = 0;
  }

  return 0;
}

