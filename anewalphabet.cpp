#include <iostream>
#include <string>
#include <map>
using namespace std;
typedef unsigned short int usint;

map <char, string> alp;
string x;
usint lx;

int main() {
  alp.insert({ 'a', "@" });
  alp.insert({ 'b', "8" });
  alp.insert({ 'c', "(" });
  alp.insert({ 'd', "|)" });
  alp.insert({ 'e', "3" });
  alp.insert({ 'f', "#" });
  alp.insert({ 'g', "6" });
  alp.insert({ 'h', "[-]" });
  alp.insert({ 'i', "|" });
  alp.insert({ 'j', "_|" });
  alp.insert({ 'k', "|<" });
  alp.insert({ 'l', "1" });
  alp.insert({ 'm', "[]\\/[]" });
  alp.insert({ 'n', "[]\\[]" });
  alp.insert({ 'o', "0" });
  alp.insert({ 'p', "|D" });
  alp.insert({ 'q', "(,)" });
  alp.insert({ 'r', "|Z" });
  alp.insert({ 's', "$" });
  alp.insert({ 't', "']['" });
  alp.insert({ 'u', "|_|" });
  alp.insert({ 'v', "\\/" });
  alp.insert({ 'w', "\\/\\/" });
  alp.insert({ 'x', "}{" });
  alp.insert({ 'y', "`/" });
  alp.insert({ 'z', "2" });

  getline(cin, x);
  lx = x.size();

  for(usint i=0; i<lx; ++i) {
    if((usint) x[i] >= 65 && (usint) x[i] <= 90) {
      x[i] = char((usint) x[i] + 32);
    }

    if(alp.count(x[i])) {
      cout << alp.find(x[i])->second;
    } else {
      cout << x[i];
    }
  }

  cout << endl;

  return 0;
}

