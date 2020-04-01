#include <iostream>
typedef unsigned short int usint;

usint n, sum = 0;
char s, in[3];

int main() {
  std::cin >> n >> s;
  
  for(usint i=0; i<(n*4); ++i) {
    std::cin >> in[0] >> in[1];
    
    if(in[1] == s) {
      switch(in[0]) {
        case 'A': sum += 11;
        break;
        case 'K': sum += 4;
        break;
        case 'Q': sum += 3;
        break;
        case 'J': sum += 20;
        break;
        case 'T': sum += 10;
        break;
        case '9': sum += 14;
        break;
        case '8':
        case '7':
          sum += 0;
        break;
        default: sum += 0;
        break;
      }
    } else {
      switch(in[0]) {
        case 'A': sum += 11;
        break;
        case 'K': sum += 4;
        break;
        case 'Q': sum += 3;
        break;
        case 'J': sum += 2;
        break;
        case 'T': sum += 10;
        break;
        case '9':
        case '8':
        case '7':
          sum += 0;
        break;
        default: sum += 0;
        break;
      }
    }
  }

  std::cout << sum << std::endl;

  return 0;
}

