#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef unsigned short int usint;

usint n, c = 0;
vector <string> t;
vector <string> ans;

int main() {
    cin >> n;
    usint b[n];

    for(usint i=0; i<n; ++i) cin >> b[i];

    sort(b, b+n);

  for(usint i=0; i<n; ++i) {
        if(b[i+1] - 1 == b[i]) {
            t.push_back(to_string(b[i]));
        } else {
            if(t.size() >= 2) {
                ans.push_back(t[0] + "-" + to_string(b[i]));
                t.clear();
            } else if(t.size() == 1) {
                ans.push_back(t[0]);
                ans.push_back(to_string(b[i]));
                t.clear();
            } else {
                ans.push_back(to_string(b[i]));
            }
        }
  }

  for(auto it=ans.begin(); it != ans.end(); ++it) {
        cout << *it;

        if(it == ans.end() - 1) cout << endl;
        else cout << " ";
  }

    return 0;
}

