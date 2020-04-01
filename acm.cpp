#include <iostream>
#include <map>
#include <list>
using namespace std;
typedef unsigned short int usint;

string x;
map <char, list <pair <usint, string>>> acm;
int c=0, r=0;

int main() {
  while(true) {
    getline(cin, x);
    if(x=="") return 0;
    else if(x=="-1") {
      for(auto it=acm.begin(); it != acm.end(); ++it) {
        int tc = 0;
        char a = it->first;
        list <pair <usint, string>> b = it->second;
        list <pair <usint, string>>::iterator i = b.begin();
        if(b.back().second == "right") {
          while(i != b.end()) {
            if(i->second == "wrong") tc += 20;
            else tc += i->first;
            ++i;
          }
          ++r;
          c += tc;
        }
      }
      cout << r << ' ' << c << '\n';
      return 0;
    } else {
      usint f = x.find(' ');
      usint y = stoi(x.substr(0, f));
      char c = x[f+1];
      string r = x.substr(f+3);
      acm[c].push_back(make_pair(y, r));
    }
  }
}

