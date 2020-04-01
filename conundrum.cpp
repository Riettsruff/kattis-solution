#include <iostream>
#include <string>
using namespace std;
typedef unsigned short int usint;

string x;
usint lx, count = 0;

int main() {
  cin >> x;

  lx = x.size();

  for(usint i=0; i<lx; ++i) {
    if(i % 3 == 0 && x[i] != 'P') count++;
    else if(i % 3 == 1 && x[i] != 'E') count++;
    else if(i % 3 == 2 && x[i] != 'R') count++;
  }

  cout << count << endl;
 
  return 0;
}

