#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef unsigned short int usint;

usint n, e;
vector <usint> num;
bool missed = false;

int main() {
  cin >> n;

  while(n--) {
    cin >> e;
    num.push_back(e);
  }

  for(usint i=1; i<=num.back(); ++i) {
    if(find(num.begin(), num.end(), i) == num.end()) {
      cout << i << endl;
      missed = true;
    }
  }

  if(!missed) cout << "good job" << endl;

  return 0;
}
