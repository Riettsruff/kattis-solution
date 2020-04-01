#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long int lint;

lint n, c = 0;
string x, y;
vector <lint> num;

int main() {
  while(true) {
    c++;
    getline(cin, x);
    istringstream iss(x);

    if(feof(stdin)) break;

    while(getline(iss, y, ' ')) {
      istringstream(y) >> n;
      num.push_back(n);
    }

    num.erase(num.begin());
    sort(num.begin(), num.end());
    cout << ("Case " + to_string(c) + ": " + to_string(num[0]) + " " +
                  to_string(num[num.size()-1]) + " " + to_string(num[num.size()-1] - num[0])) << endl;
    num.clear();
  }

  return 0;
}

