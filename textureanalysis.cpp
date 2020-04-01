#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
typedef unsigned short int usint;

usint s, c;
string x;
set <usint> st;

int main() {
  while(true) {
    s++;
    getline(cin, x);

    if(x == "END") break;

    if(count(x.begin(), x.end(), '.') == 0) {
      cout << s << " EVEN" << endl;
      continue;
    }

    for(usint i=1; i<x.size(); ++i) {
      if(x[i] == '*') {
        st.insert(c);
        c = 0;
      } else c++;
    }

    if(st.size() == 1) cout << s << " EVEN" << endl;
    else cout << s << " NOT EVEN" << endl;

    st.clear();
    c = 0;
  }

  return 0;
}
