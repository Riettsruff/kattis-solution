#include <iostream>
using namespace std;
typedef unsigned short int usint;

usint h,w,n,c;
bool mission;

int main() {
  cin >> h >> w >> n;
  c = w;
  usint br[n];

  for(usint i=0; i<n; ++i) cin >> br[i];

  for(usint i=0; i<n; ++i) {
    if(br[i] > c) {
      mission = false;
      break;
    } else {
      c -= br[i];

      if(c == 0) {
        h--;
        c = w;
      }

      if(h == 0) {
        mission = true;
        break;
      }
    }
  }

  cout << (mission ? "YES" : "NO") << endl;

  return 0;
}

