#include <iostream>
#include <string>
#include <sstream>
typedef unsigned short int usint;

std::string a, b;
char temp;
std::stringstream ss;

int main() {
  std::cin >> a >> b;  
  usint i, j;
  
  for(i=0, j=2; i<j; ++i, --j) {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    temp = b[i];
    b[i] = b[j];
    b[j] = temp;
  }

  ss >> a >> b;

  if(a > b) std::cout << a << std::endl;
  else std::cout << b << std::endl;
  
  return 0;
}

