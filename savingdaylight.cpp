#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
typedef unsigned short int usint;

string x, y, ha, ma, hb, mb;
vector <string> v;

int main() {
  while(true) {
    getline(cin, x);
    istringstream iss(x);

    if(x == "") break;

    while(getline(iss, y, ' ')) {
      v.push_back(y);
    }

    hb = v[v.size()-2].substr(0, v[v.size()-2].find(':'));
    mb = v[v.size()-2].substr(v[v.size()-2].find(':')+1);
    ha = v.back().substr(0, v.back().find(':'));
    ma = v.back().substr(v.back().find(':')+1);

    for(usint i=0; i<v.size()-2; ++i) {
      cout << v[i] << " ";
    }

    if(stoi(ma) - stoi(mb) < 0) {
      cout << stoi(ha) - stoi(hb) - 1 << " hours ";
      cout << stoi(ma) - stoi(mb) + 60 << " minutes";
    } else {
      cout << stoi(ha) - stoi(hb) << " hours ";
      cout << stoi(ma) - stoi(mb) << " minutes";
    }

    cout << endl;
    v.clear();
  }

  return 0;
}

