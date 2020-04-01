#include <iostream>
#include <map>
using namespace std;
typedef unsigned short int usint;

usint n, ls, p;
string s;
map <char, pair<usint, string>> keypad {
  { 'a', { 2, "2" } },
  { 'b', { 2, "22" } },
  { 'c', { 2, "222" } },
  { 'd', { 3, "3" } },
  { 'e', { 3, "33" } },
  { 'f', { 3, "333" } },
  { 'g', { 4, "4" } },
  { 'h', { 4, "44" } },
  { 'i', { 4, "444" } },
  { 'j', { 5, "5" } },
  { 'k', { 5, "55" } },
  { 'l', { 5, "555" } },
  { 'm', { 6, "6" } },
  { 'n', { 6, "66" } },
  { 'o', { 6, "666" } },
  { 'p', { 7, "7" } },
  { 'q', { 7, "77" } },
  { 'r', { 7, "777" } },
  { 's', { 7, "7777" } },
  { 't', { 8, "8" } },
  { 'u', { 8, "88" } },
  { 'v', { 8, "888" } },
  { 'w', { 9, "9" } },
  { 'x', { 9, "99" } },
  { 'y', { 9, "999" } },
  { 'z', { 9, "9999" } },
  { ' ', { 0, "0"} }
};

int main() {
  cin >> n;
  cin.ignore();

  for(usint i=1; i<= n; ++i) {
    getline(cin, s);
    ls = s.size();
    p = keypad[s[0]].first;
    cout << "Case #" << i << ": " << keypad[s[0]].second;

    for(usint j=1; j<ls; ++j) {
      if(keypad[s[j]].first == p) cout << " ";
      cout << keypad[s[j]].second;
      p = keypad[s[j]].first;
    }

    cout << endl;
  }

  return 0;
}

