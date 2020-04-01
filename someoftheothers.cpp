#include <iostream>
#include <vector>
using namespace std;

string x, t;
vector <int> v;
int c;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  while(true) {
    getline(cin, x);
    if(x == "") break;
    t = "";
    for(char c : x) {
      if(c == ' ') {
        v.emplace_back(stoi(t));
        t = "";
      } else t += c;
    }
    v.emplace_back(stoi(t));
    for(int i=0; i<v.size(); ++i) {
      c = 0;
      for(int j=0; j<v.size(); ++j) {
        if(j != i) c += v[j];
      }
      if(c == v[i]) {
        cout << v[i] << '\n';
        break;
      }
    }
    v.clear();
  }

  return 0;
}

