#include <iostream>
#include <string>
using namespace std;
typedef short int sint;

sint n, r, c;

int main() {
  cin >> n;

  for(sint t=1; t<=n; ++t) {
    cin >> r >> c;
    cin.ignore();
    char s[r][c];

    for(sint i=0; i<r; ++i) {
      for(sint j=0; j<c; ++j) {
        cin >> s[i][j];
      }
    }

    cout << "Test " << t << endl;

    for(sint i=r-1; i>=0; --i) {
      for(sint j=c-1; j>=0; --j) {
        cout << s[i][j];
      }

      cout << endl;
    }
  }

  return 0;
}

