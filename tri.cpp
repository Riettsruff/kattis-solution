#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint a, b, c;

int main() {
  cin >> a >> b >> c;

  if(a + b == c) {
    cout << a << "+" << b << "=" << c << endl;
  } else if(b + c == a) {
    cout << a << "=" << b << "+" << c << endl;
  } else if(a - b == c) {
    cout << a << "-" << b << "=" << c << endl;
  } else if(b - c == a) {
    cout << a << "=" << b << "-" << c << endl;
  } else if(a * b == c) {
    cout << a << "*" << b << "=" << c << endl;
  } else if(b * c == a) {
    cout << a << "=" << b << "*" << c << endl;
  } else if(a / b == c) {
    cout << a << "/" << b << "=" << c << endl;
  } else if(b / c == a) {
    cout << a << "=" << b << "/" << c << endl;
  }

  return 0;
}

