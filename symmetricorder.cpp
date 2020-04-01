#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef unsigned short int usint;

usint n, pos, set = 0;
vector<string> temp;
vector<string> result;
string c, s;

int main() {
  for(;;) {
    cin >> n;
    if(n == 0) break;

    cin.ignore();
    set++;
    
    while(n--) {
      getline(cin, c);
      if((temp.size()+1) > 2) {
        pos = (temp.size()+1)/2;
        temp.insert(temp.begin()+pos, c);
      } else {
        temp.push_back(c);
      }
    }
    
    s = "SET ";
    s += to_string(set);
    
    result.push_back(s);
    result.insert(result.begin()+result.size(), temp.begin(), temp.end());
    temp.clear();
  }

  for(auto it=result.begin(); it != result.end(); ++it) {
    cout << *it << endl;
  }
 
  return 0;
}

