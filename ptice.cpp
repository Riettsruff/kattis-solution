#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef unsigned short int usint;

usint n;
vector <char> adrian;
vector <char> bruno;
vector <char> goran;

struct ptice {
  string name;
  usint value;
} t[3];

bool compareValue(ptice x, ptice y) {
  return (x.value > y.value);
}

int main() {
  cin >> n;
    
  if(n == 0) return 0;

  char x[n+1];
  t[0].name = "Adrian";
  t[1].name = "Bruno";
  t[2].name = "Goran";

  for(usint i=0; i<n; ++i) {
    cin >> x[i];
  }

  for(usint i=0; i<n; ++i) {
    adrian.push_back('A');
    
    if(++i < n) adrian.push_back('B');
    else break;
 
    if(++i < n) adrian.push_back('C');
    else break;
  }

  for(usint i=0; i<n; ++i) {
    bruno.push_back('B');

    if(++i < n) bruno.push_back('A');
    else break;

    if(++i < n) bruno.push_back('B');
    else break;

    if(++i < n) bruno.push_back('C');
    else break;
  }

  for(usint i=0; i<n; ++i) {
    goran.push_back('C');

    if(++i < n) goran.push_back('C');
    else break;

    if(++i < n) goran.push_back('A');
    else break;

    if(++i < n) goran.push_back('A');
    else break;

    if(++i < n) goran.push_back('B');
    else break;

    if(++i < n) goran.push_back('B');
    else break;
  }

  for(usint i=0; i<n; ++i) {
    if(adrian[i] == x[i]) t[0].value++;

    if(bruno[i] == x[i]) t[1].value++;

    if(goran[i] == x[i]) t[2].value++;
  }

  sort(t, t+3, compareValue);
  cout << t[0].value << endl << t[0].name << endl;

  for(usint i=1; i<3; ++i) {
    if(t[i].value == t[0].value) cout << t[i].name << endl;
  }
 
  return 0;
}

