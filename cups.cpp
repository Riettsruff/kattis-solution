#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
typedef unsigned short int usint;

struct cups {
  string color;
  usint size;
};

usint n, lx, j;
string x, xFirst, xSecond;

bool compareCup(cups x, cups y) {
  return (x.size < y.size);
}

int main() {
  cin >> n; 
  cin.ignore();

  cups cup[n];

  for(usint i=0; i<n; ++i) {
    xFirst = xSecond = "";
    j = 0;

    getline(cin, x);
    lx = x.size();
   
    while(x[j] != ' ') {
      xFirst += x[j];
      ++j;
    }
    
    for(uint k=++j; k<lx; ++k) {
      xSecond += x[k];
    }
    
    if((usint) xFirst[0] > 47 && (usint) xFirst[0] < 58) {
      cup[i].size = stoi(xFirst)/2;
      cup[i].color = xSecond;
    } else {
      cup[i].size = stoi(xSecond);
      cup[i].color = xFirst;
    }
  }

  sort(cup, cup+n, compareCup);

  for(usint i=0; i<n; ++i) {
    cout << cup[i].color << endl;
  }

  return 0;
}

