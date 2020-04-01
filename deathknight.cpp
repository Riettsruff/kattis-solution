#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, c=0;
  string x;

  cin >> n;
  for(int i=0; i<n; ++i) {
    cin.ignore();
    cin >> x;
    for(int j=0; j<x.size()-1; ++j) {
      if(x[j] == 'C' && x[j+1] == 'D') ++c;
    }
  }
  cout << n-c << '\n';

  return 0;
}

