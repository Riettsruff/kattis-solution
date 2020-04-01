#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef unsigned short int usint;

usint n, t;
vector <usint> x;

int main() {
  cin >> n;

  while(n--) {
    cin >> t;
    x.push_back(ceil(t/400.));
  }

  for(auto it=x.begin(); it != x.end(); ++it) {
    cout << *it << endl;
  }

  return 0;
}

