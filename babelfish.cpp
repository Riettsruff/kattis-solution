#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
typedef unsigned short int usint;

usint idx;
string x;
unordered_map <string, string> mapx;

int main() {
    while(getline(cin, x)) {
        if(x == "") {
            break;
        } else {
            idx = x.find(' ');
            mapx[x.substr(idx+1)] = x.substr(0, idx);
        }
    }

  while(getline(cin, x)) {
        if(x == "") {
            break;
        } else {
            if(mapx.count(x)) cout << mapx.find(x)->second << endl;
            else cout << "eh" << endl;
        }
  }

    return 0;
}

