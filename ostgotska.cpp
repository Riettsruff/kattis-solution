#include <iostream>
#include <sstream>
using namespace std;
typedef unsigned short int usint;

string x, y;
usint e=0, s=0;

int main() {
  getline(cin, x);
  istringstream iss(x);

  while(getline(iss, y, ' ')) {
    for(usint i=0; i<y.size()-1; ++i) {
      if(y[i] == 'a' && y[i+1] == 'e') {
        s++;
        break;
      }
    }
   
    e++;
  }

  if((s*1.0)/(e*1.0)*(100*1.0) >= 40) cout << "dae ae ju traeligt va" << endl;
  else cout << "haer talar vi rikssvenska" << endl;

  return 0;
}

