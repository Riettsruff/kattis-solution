#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned short usint;

usint n, lname;
string x;
vector <string> name;
vector <string> ans;

bool sorting(const string& s1, const string& s2) {
  if(s1[0] == s2[0]) return s1[1] < s2[1];
  else return s1[0] < s2[0];
}

int main() {
  cin >> n;
  cin.ignore();

  while(n) {
    for(usint m=0; m<n; ++m) {
      getline(cin, x);
      name.push_back(x);
    }

    stable_sort(name.begin(), name.end(), sorting);

    for(string s : name) ans.push_back(s);
    name.clear();

    cin >> n;
    cin.ignore();

    if(n == 0) break;
    else ans.push_back("\n");
  }

  for(string s : ans) cout << s << endl;

  return 0;
}

