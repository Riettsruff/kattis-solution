#include <iostream>
#include <iomanip>
using namespace std;
typedef long long ll;

int n;
ll t1, t2;
float v1, v2;
double area = 0;

int main() {
  cin >> n >> t1 >> v1;
  --n;
  while(n--) {
    cin >> t2 >> v2;
    area += (v1+v2)/2*(t2-t1);
    v1 = v2;
    t1 = t2;
  }
  cout << setprecision(10) << area/1000 << '\n';

  return 0;
}

