#include <iostream>
#include <algorithm>
using namespace std;
typedef short int sint;

sint arr[3];

int main() {
  for(sint i=0; i<3; ++i) {
    cin >> arr[i];
  }

  sort(begin(arr), end(arr));
  
  if((arr[1] - arr[0]) == (arr[2] - arr[1])) {
    cout << arr[2] + (arr[2] - arr[1]) << endl;
  } else if(arr[2] - (arr[1] - arr[0]) == (arr[1] + (arr[1] - arr[0]))) {
    cout << arr[2] - (arr[1] - arr[0]) << endl;
  } else if(arr[2] - arr[1] == arr[1] - (arr[0] + (arr[2] - arr[1]))) {
    cout << arr[2] - arr[1] + arr[0] << endl;
  } else {
    cout << arr[0] - (arr[1] - arr[0]) << endl;
  }
  
  return 0;
}

