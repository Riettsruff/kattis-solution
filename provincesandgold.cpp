#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint a, b, c, d;

struct victory {
  string name;
  usint cost, worth;
} v[3];

struct treasure {
  string name;
  usint cost, worth;
} t[3];

int main() {
  
  v[0].name = "Province";
  v[0].cost = 8;
  v[0].worth = 6;
  v[1].name = "Duchy";
  v[1].cost = 5;
  v[1].worth = 3;
  v[2].name = "Estate";
  v[2].cost = 2;
  v[2].worth = 1;

  t[0].name = "Gold";
  t[0].cost = 6;
  t[0].worth = 3;
  t[1].name = "Silver";
  t[1].cost = 3;
  t[1].worth = 2;
  t[2].name = "Copper";
  t[2].cost = 0;
  t[2].worth = 1;

  cin >> a >> b >> c;
  d = (a*(t[0].worth)) + (b*(t[1].worth)) + (c*(t[2].worth));

  if(d >= v[0].cost) {
    cout << v[0].name;
  } else if(d >= v[1].cost) {
    cout << v[1].name;
  } else if(d >= v[2].cost) {
    cout << v[2].name;
  }

  if(d >= t[0].cost) {
    cout << " or " << t[0].name;
  } else if(d >= t[1].cost) {
    cout << " or " << t[1].name;
  } else if(d == 1 || d == 0) {
    cout << t[2].name;
  } else {
    cout << " or " << t[2].name;
  }

  cout << endl;

  return 0;
}

