#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char in[1000000];
char out[1000000];
int lin;
int i = 0, j = 0;

int main() {
  cin >> in;

  lin = strlen(in);

  for(; i<lin; ++i) {
    if(in[i] == '<') {
      if(j > 0) j--;
    } else {
      out[j] = in[i];
      ++j;
    }
  }

  out[j] = '\0';
  cout << out << endl;

  return 0;
}

