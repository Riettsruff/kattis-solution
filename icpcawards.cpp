#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef unsigned short int usint;

usint n, llistU;
string x, y;
vector <string> listU;
vector <string> listT;
vector <string>::iterator it;

struct icpc {
  string university, team;
};

int main() {
  cin >> n;

  icpc awards[n];

  for(usint i=0; i<n; ++i) {
    cin >> x >> y;

    awards[i].university = x;
    awards[i].team = y;
    llistU = listU.size();
    it = find(listU.begin(), listU.end(), awards[i].university);
  
    if(it != listU.end()) {
      continue;
    } else {
      if(llistU < 12) {
        listU.push_back(awards[i].university);
        listT.push_back(awards[i].team);
      } else {
        continue;
      }
    }
  }

  for(usint i=0; i<12; ++i) {
    cout << listU[i] << " " << listT[i] << endl;
  }

  return 0;
}
