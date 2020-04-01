#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
typedef short int sint;

string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
string x, y;
sint lz, a;
vector <string> z;

int main() {
  for(;;) {
    getline(cin, x);
    istringstream iss(x);
  
    while(getline(iss, y, ' ')) {
      z.push_back(y);
    }

    if(z[0] == "0") break;

    lz = z[1].size();

    for(sint i=lz-1; i>=0; --i) {
      if(z[1][i] == '_') a = 26;
      else if(z[1][i] == '.') a = 27;
      else a = z[1][i] - 'A';

      a = (a + stoi(z[0])) % 28;
      cout << s[a];
    }

    cout << endl;
    z.clear();
  }

  return 0;
}
