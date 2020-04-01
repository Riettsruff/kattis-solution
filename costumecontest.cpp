#include <iostream>
#include <map>
#include <climits>
using namespace std;

int n;
string s;
map <string, int> m;
int mn = INT_MAX;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  while(n--) {
    cin >> s;
    ++m[s];
  }
  for(const auto& x : m) {
    if(x.second < mn) mn = x.second;
  }
  for(const auto& x : m) {
    if(x.second == mn) cout << x.first << '\n';
  }

  return 0;
}

