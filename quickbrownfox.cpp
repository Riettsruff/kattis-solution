#include <iostream>
#include <string>
#include <map>
using namespace std;
typedef unsigned short int usint;

usint n, lx;
string x, miss = "missing ";
map <char, bool> alp;
bool pangram = true;

int main() {
  for(usint i=0; i<26; ++i) {
    alp.insert({char('a' + i), false});
  }

  cin >> n;
  cin.ignore();

  while(n--) {
    getline(cin, x);
    lx = x.size();

    for(usint i=0; i<lx; ++i) {
      if(x[i] >= 'A' && x[i] <= 'Z') x[i] = char(x[i] + 32);
      if(alp.count(x[i])) alp[x[i]] = true;
    }

    for(char i='a'; i<='z'; ++i) {
      if(alp[i] == false) {
        pangram = false;
        miss += i;
      }
    }

    if(pangram == false) cout << miss << endl;
    else cout << "pangram" << endl;

    pangram = true;
    miss = "missing ";

    for(char i='a'; i<='z'; ++i) alp[i] = false;
  }

  return 0;
}

