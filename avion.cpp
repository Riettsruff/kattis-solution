#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint ls;
string s, ans;

int main() {
  for(usint i=1; i<=5; ++i) {
    getline(cin, s);
    ls = s.size();
   
    for(usint j=0; j<ls; ++j) {
      if(s[j] == 'F') {
        if(j+2 < ls && s[j+1] == 'B' && s[j+2] == 'I') {
          ans += to_string(i) + " ";
          break;
        }
      }
    }
  }

  if(ans == "") cout << "HE GOT AWAY!" << endl;
  else cout << ans << endl;

  return 0;
}
