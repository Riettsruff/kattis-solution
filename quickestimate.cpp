#include <iostream>
#include <string>
using namespace std;
typedef unsigned short int usint;

usint n;
string e;

int main() {
  cin >> n;

  while(n--) {
    cin >> e;
    cout << e.size() << endl;
  }
 
  return 0;
}
