#include <iostream>
#include <vector>
#include <sstream>
#include <set>
#include <algorithm>
using namespace std;
typedef unsigned short int usint;

usint n;
string x, y, ans;
vector <vector <string>> v;
vector <string> tmp;
set <string> item;

bool compare(vector <string> a, vector <string> b) {
  return a[0] < b[0];
}

int main() {
  for(;;) {
    cin >> n;
    cin.ignore();

    if(n == 0) break;

    while(n--) {
      getline(cin, x);
      istringstream iss(x);
      
      while(getline(iss, y, ' ')) {
        tmp.push_back(y);
      }

      v.push_back(tmp);
      tmp.erase(tmp.begin());
      
      for(auto it=tmp.begin(); it != tmp.end(); ++it) {
        item.insert(*it);
      }

      tmp.clear();
    }

    sort(v.begin(), v.end(), compare);
  
    for(auto it=item.begin(); it != item.end(); ++it) {
      ans = *it + " ";

      for(usint i=0; i<v.size(); ++i) {
        if(find(v[i].begin(), v[i].end(), *it) != v[i].end()) {
          ans += v[i][0] + " ";
        }
      }

      cout << ans << endl;
    }

    item.clear();
    v.clear();
    cout << endl;
  }

  return 0;
}
