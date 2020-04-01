#include <iostream>
using namespace std;
typedef unsigned short int usint;

void compStr(string x, string y) {
  int z = 0;

  for(int i=0; i<x.size(); ++i) {
    if(x[i] == y[i]) {
      ++z;
    }
  }

  if(z == x.size() && (y[y.size()-1] >= 48 && y[y.size()-1] <= 57)) {
    cout << "Yes" << "\n";
  } else {
    z = 0;

    for(int i=0; i<x.size(); ++i) {
      if(x[i] == y[i+1]) {
        ++z;
      }
    }

    if(z == x.size() && (y[0] >= 48 && y[0] <= 57)) {
      cout << "Yes" << "\n";
    } else {
      z = 0;

      for(int i=0; i<x.size(); ++i) {
        if(
            ((x[i] >= 65 && x[i] <= 90) && (y[i] == x[i] + 32)) ||
            ((x[i] >= 97 && x[i] <= 122) && (y[i] == x[i] - 32)) ||
            (
              (x[i] == y[i]) &&
              !((y[i] >= 65 && y[i] <= 90) || (y[i] >= 97 && y[i] <= 122))
            )
        ) {
          ++z;
        }
      }

      if(z == x.size() && (y[y.size()-1] >= 48 && y[y.size()-1] <= 57)) {
        cout << "Yes" << "\n";
      } else {
        z = 0;

        for(int i=0; i<x.size(); ++i) {
          if(
              ((x[i] >= 65 && x[i] <= 90) && (y[i+1] == x[i] + 32)) ||
              ((x[i] >= 97 && x[i] <= 122) && (y[i+1] == x[i] - 32)) ||
              (
                (x[i] == y[i+1]) &&
                !((y[i+1] >= 65 && y[i+1] <= 90) || (y[i+1] >= 97 && y[i+1] <= 122))
              )
          ) {
            ++z;
          }
        }

        if(z == x.size() && (y[0] >= 48 && y[0] <= 57)) {
          cout << "Yes" << "\n";
        } else {
          cout << "No" << "\n";
        }
      }
    }
  }
}

int main() {
  string x,y;

  cin >> x >> y;

  if(x.size() == y.size()) {
    if(x == y) {
      cout << "Yes" << "\n";
    } else {
      int z = 0;

      for(int i=0; i<x.size(); ++i) {
        if(
            ((x[i] >= 65 && x[i] <= 90) && (y[i] == x[i] + 32)) ||
            ((x[i] >= 97 && x[i] <= 122) && (y[i] == x[i] - 32)) ||
            (
              (x[i] == y[i]) &&
              !((y[i] >= 65 && y[i] <= 90) || (y[i] >= 97 && y[i] <= 122))
            )
        ) {
          ++z;
        }
      }

      if(z == x.size()) {
        cout << "Yes" << "\n";
      } else {
        cout << "No" << "\n";
      }
    }
  } else if(y.size() == x.size()+1) {
    compStr(x, y);
  } else if(y.size()+1 == x.size()) {
    string temp = x;
    x = y;
    y = temp;

    compStr(x, y);
  } else {
    cout << "No" << "\n";
  }

  return 0;
}

