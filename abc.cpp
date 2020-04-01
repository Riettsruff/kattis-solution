#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned short int usint;

usint c[3];
char d[4];

int main() {
  cin >> c[0] >> c[1] >> c[2] >> d;
  sort(c, c+3);

  if(d[0] == 'A') cout << c[0] << " ";
  else if(d[0] == 'B') cout << c[1] << " ";
  else cout << c[2] << " ";

  if(d[1] == 'A') cout << c[0] << " ";
  else if(d[1] == 'B') cout << c[1] << " ";
  else cout << c[2] << " ";

  if(d[2] == 'A') cout << c[0] << endl;
  else if(d[2] == 'B') cout << c[1] << endl;
  else cout << c[2] << endl;
   
  return 0;
}

