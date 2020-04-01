#include <iostream>
#include <cmath>
using namespace std;
typedef short int sint;

sint n, ls, sqs;
string s;

int main() {
  cin >> n;
  cin.ignore();

  while(n--) {
    getline(cin, s);
    ls = s.size();

    if(floor(sqrt(ls)) - sqrt(ls) != 0) {
      sint i = 1;
 
      for(;;) {
        s += "*";

        if(floor(sqrt(ls+i)) - (sqrt(ls+i)) == 0) {
          sqs = sqrt(ls+i);
          ls += i;
          break;
        }

        i++;
      }
    } else sqs = sqrt(ls);

    for(sint i=0; i<sqs; ++i) {
      for(sint j=ls-sqs+i; j>=0; j-=sqs) {
        if(s[j] != '*') cout << s[j];
      }
    }
    
    cout << endl;
  }

  return 0;
}

