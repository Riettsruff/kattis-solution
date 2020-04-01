#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef short int sint;

sint n, e, i;
vector <pair <sint, sint>> v;
map <sint, sint> tmp;

int main() {
  while(true) {
    cin >> n;

    if(n == 0) break;

    for(i=0; i<n; ++i) {
      cin >> e;
      v.push_back({ 0, e });
      tmp.insert({ e, 0 });
    }

    i = 0;

    for(auto it=tmp.begin(); it != tmp.end(); ++it, ++i) {
      it->second = i;
    }

    for(i=0; i<n; ++i) {
      v[i].first = tmp[v[i].second];
    }

    tmp.clear();

    for(i=0; i<n; ++i) {
      cin >> e;
      tmp.insert({ e, 0 });
    }

    i = 0;
    
    for(auto it=tmp.begin(); it != tmp.end(); ++it, ++i) {
      it->second = i;
    }
   
    for(i=0; i<n; ++i) {
      for(auto it=tmp.begin(); it != tmp.end(); ++it) {
        if(it->second == v[i].first) {
          cout << it->first << endl;
          break;
        }
      }
    }

    cout << endl;
    v.clear();
    tmp.clear();
  }

  return 0;
}

