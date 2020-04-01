#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
typedef unsigned short int usint;

usint xl, c, n = 5;
vector <char> card;
vector <bool> visited(n, false);
vector <usint> amount;
string x;

int main() {
  getline(cin, x);
  xl = x.size();

  for(usint i=0; i<xl; i+=3) {
    card.push_back(x[i]);
  }
  
  for(usint i=0; i<n; ++i) {
    
    if(visited[i] == true) continue;

    c = 1;

    for(usint j = i+1; j<n; ++j) {
      if(card[i] == card[j]) {
        visited[j] = true;
        c++;
      }
    }

    amount.push_back(c);
  }

  sort(amount.begin(), amount.end(), greater<usint>());
  cout << amount.front() << endl;

  return 0;
}
