#include <iostream>
using namespace std;
typedef short int sint;

sint arr[5];
sint temp;
bool gr;

void printAll() {
  for(sint i=0; i<5; ++i) {
    cout << arr[i] << " ";
  }

  cout << endl;
}

int main() {
  for(sint i=0; i<5; ++i) {
    cin >> arr[i];
  }

  while(true) {
    gr = false;

    if(arr[0] > arr[1]) {
      temp = arr[0];
      arr[0] = arr[1];
      arr[1] = temp;

      gr = true;
      printAll();
    }

    if(arr[1] > arr[2]) {
      temp = arr[1];
      arr[1] = arr[2];
      arr[2] = temp;

      gr = true;
      printAll();
    }

    if(arr[2] > arr[3]) {
      temp = arr[2];
      arr[2] = arr[3];
      arr[3] = temp;

      gr = true;
      printAll();
    }

    if(arr[3] > arr[4]) {
      temp = arr[3];
      arr[3] = arr[4];
      arr[4] = temp;

      gr = true;
      printAll();
    }

    if(!gr) break;
  }

  return 0;
}

