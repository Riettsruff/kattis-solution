#include <bits/stdc++.h>
using namespace std;
typedef short int sint;

sint p, t, s=0;
string w;
bool l;

int main() {
  cin >> p >> t;

  while(p--) {
    l = true;

    for(int i=0; i<t; ++i) {

      cin >> w;

      if(l) {
        if(any_of(w.begin()+1, w.end(), ::isupper)) {
          l = false;
        }
      }
    }

    if(l) s++;
  }

  cout << s << endl;

  return 0;
}

