#include <iostream>
#include <queue>
using namespace std;
typedef unsigned int uint;

uint n, m, d = 0, maxDay = 0;
priority_queue <uint> day;

int main() {
  cin >> n;

  while(n--) {
    cin >> m;
    day.push(m);
  }

  while(!day.empty()) {
    if(day.top() + (++d) > maxDay) maxDay = day.top() + d;
    day.pop();
  }

  cout << maxDay + 1 << endl;

  return 0;
}
