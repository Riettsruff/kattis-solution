#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
typedef unsigned long long int ullint;
typedef unsigned short int usint;

usint idx;
ullint x, y;
string z;
vector <ullint> r;

int main() {
  while(getline(cin, z)) {
    if(z == "") break;
    else {
      idx = z.find(' ');
      stringstream(z.substr(0, idx)) >> x;
      stringstream(z.substr(idx + 1)) >> y;

      if(x > y) r.push_back(x - y);
      else r.push_back(y - x);
    }
  }

  for(auto it=r.begin(); it != r.end(); ++it) {
    cout << *it << endl;
  }

  return 0;
}

