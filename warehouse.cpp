#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned short int usint;

usint n, e, c;
string s;
vector <pair <string, usint>> v;
bool t;

int main() {
  cin >> n;

  while(n--) {
    cin >> e;
   
    while(e--) {
      t = false;
      cin >> s >> c;
      
      if(v.size() > 0) {
        for(usint i=0; i<v.size(); ++i) {
          if(v[i].first == s) {
            t = true;
            v[i].second += c;
            break;
          }
        }

        if(!t) v.push_back({ s, c });
      } else v.push_back({ s, c });
    }

    sort(begin(v), end(v),
      [](pair <string, usint> a, pair <string, usint> b) {
        return a.second != b.second ? a.second > b.second : a.first < b.first;
      }
    );

    cout << v.size() << endl;

    for(usint i=0; i<v.size(); ++i) {
      cout << v[i].first << " " << v[i].second << endl;
    }

    v.clear();
  }

  return 0;
}

