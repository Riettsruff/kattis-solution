#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef unsigned short int usint;

usint a = 2, b = 1, c = 0;
usint x, l, sum, count;
vector<usint> temp;
string ans;
bool stop = false;

int main() {
  cin >> x;

  while(!stop) {
    l = x / (a + b) + 1;
    temp.clear();

    for(usint i=0; i<l; ++i) {
      temp.push_back(a);
      temp.push_back(b);
    }

    sum = temp.at(0);
    count = 0;

    for(usint i=1; i<temp.size(); ++i) {
      sum += temp[i];
      count++;  
      if(sum == x) {
        ans += to_string(a) + "," + to_string(b) + "\n";
        if(count == 1) {
          stop = true;
          temp.clear();
        }
        break;
      }
    }

    if(c) {
      a++;
      c = 0;
    } else {
      b++;
      c = 1;
    }
  }

  cout << x << ":" << endl << ans;

  return 0;
}
