#include <iostream>
#include <set>
using namespace std;
typedef unsigned short int usint;

set <usint> num;
usint n;

int main() {
  for(usint i=0; i<10; ++i) {
    cin >> n;
    num.insert(n%42);
  }

  cout << num.size() << endl;

  return 0;
}

