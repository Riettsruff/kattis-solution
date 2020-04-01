#include <iostream>
#include <string>
using namespace std;
typedef unsigned short int usint;

usint t=0,c=0,g=0,b=0,lx,ans;
string x;

int main() {
  getline(cin, x);
  lx = x.size();

  for(usint i=0; i<lx; ++i) {
    if(x[i] == 'T') t++;
    else if(x[i] == 'C') c++;
    else if(x[i] == 'G') g++;
    
    if(t > 0 && c > 0 && g > 0) {
      b++;
      t -= 1;
      c -= 1;
      g -= 1;
    } 
  }  

  ans = ((t+b)*(t+b)) + ((g+b)*(g+b)) + ((c+b)*(c+b)) + (7*b);

  cout << ans << endl;

  return 0;
}

