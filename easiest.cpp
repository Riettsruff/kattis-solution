#include <iostream>
using namespace std;
typedef unsigned int uint;
typedef unsigned short int usint;

usint sum, sumn, sumx;
uint x, i;

usint sumDigit(uint n) {
  sum = 0;
  
  while(n > 0) {
    sum += n % 10;
    n /= 10;
  }
 
  return sum;
}

int main() {
  while(true) {
    cin >> x;
    
    if(x == 0) break;

    sumx = sumDigit(x);    
    i = 11;

    while(true) {
      sumn = sumDigit(x * i);

      if(sumn == sumx) {
        cout << i << endl;
        break;
      }

      i++;
    }
  }

  return 0;
}
