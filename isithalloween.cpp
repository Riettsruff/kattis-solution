#include <iostream>
#include <string>
typedef unsigned short int usint;

char month[4];
usint date;

int main() {
  std::cin >> month >> date;
  if(((std::string) month == "OCT" && date == 31) ||
     ((std::string) month == "DEC" && date == 25))
    std::cout << "yup" << std::endl;
  else
    std::cout << "nope" << std::endl;

  return 0;
}

