#include <iostream>
#include <string>
#include <cmath>
using namespace std;
typedef short int sint;

string x, ans;
sint n, lx, sqlx;

int main() {
  cin >> n;
  cin.ignore();

  while(n--) {
    getline(cin, x);

    ans = "";
    lx = x.size();
    sqlx = sqrt(lx);
       
    for(sint i = 0; i < sqlx; ++i) {
      for(sint j = lx-sqlx+i; j >= i; j -= sqlx) {
        ans += x[j];
      }
    }

    for(sint i=lx-1; i>=0; i--) {
      cout << ans[i];
    }
    
    cout << endl;
  }

  return 0;
}

