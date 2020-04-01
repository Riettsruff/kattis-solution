
#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint x;
string s;

int main() {
  cin >> x >> s;

  for(int i=x; i>2; --i) {
    cout << x << " bottles of " << s << " on the wall, " << x << " bottles of "
         << s << ".\n" << "Take one down, pass it around, "
         << --x << " bottles of " << s << " on the wall.\n\n";
  }

  if(x > 1) {
    cout << x << " bottles of " << s << " on the wall, " << x << " bottles of "
         << s << ".\n" << "Take one down, pass it around, "
         << --x << " bottle of " << s << " on the wall.\n\n";
  }

  cout << "1 bottle of " << s << " on the wall, 1 bottle of " << s
       << ".\nTake it down, pass it around, no more bottles of " << s << ".\n";

  return 0;
}



