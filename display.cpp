#include <iostream>
using namespace std;
typedef unsigned short int usint;

string x;
usint arr[4];

void p1(usint x) {
  switch(x) {
    case 1:
      cout << "    +";
    break;
    case 4:
      cout << "+   +";
    break;
    case 0:
    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      cout << "+---+";
    break;
  }
}

void p2(usint x) {
  switch(x) {
    case 0:
    case 4:
    case 8:
    case 9:
      cout << "|   |";
    break;
    case 1:
    case 2:
    case 3:
    case 7:
      cout << "    |";
    break;
    case 5:
    case 6:
      cout << "|    ";
    break;
  }
}

void p3(usint x) {
  switch(x) {
    case 0:
      cout << "+   +";
    break;
    case 1:
      cout << "    +";
    break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
      cout << "+---+";
    break;
    case 7:
      cout << "    +";
    break;
  }
}

void p4(usint x) {
  switch(x) {
    case 0:
    case 6:
    case 8:
      cout << "|   |";
    break;
    case 1:
    case 3:
    case 4:
    case 5:
    case 7:
    case 9:
      cout << "    |";
    break;
    case 2:
      cout << "|    ";
    break;
  }
}

void p5(usint x) {
  switch(x) {
    case 0:
    case 2:
    case 3:
    case 5:
    case 6:
    case 8:
    case 9:
      cout << "+---+";
    break;
    case 1:
    case 4:
    case 7:
      cout << "    +";
    break;
  }
}

int main() {
  while(true) {
    getline(cin, x);

    if(x == "end") {
      cout << "end" << endl;
      break;
    }

    arr[0] = x[0]-'0';
    arr[1] = x[1]-'0';
    arr[2] = x[3]-'0';
    arr[3] = x[4]-'0';

    p1(arr[0]);
    cout << "  ";
    p1(arr[1]);
    cout << "     ";
    p1(arr[2]);
    cout << "  ";
    p1(arr[3]);
    cout << endl;

    p2(arr[0]);
    cout << "  ";
    p2(arr[1]);
    cout << "     ";
    p2(arr[2]);
    cout << "  ";
    p2(arr[3]);
    cout << endl;

    p2(arr[0]);
    cout << "  ";
    p2(arr[1]);
    cout << "  o  ";
    p2(arr[2]);
    cout << "  ";
    p2(arr[3]);
    cout << endl;

    p3(arr[0]);
    cout << "  ";
    p3(arr[1]);
    cout << "     ";
    p3(arr[2]);
    cout << "  ";
    p3(arr[3]);
    cout << endl;

    p4(arr[0]);
    cout << "  ";
    p4(arr[1]);
    cout << "  o  ";
    p4(arr[2]);
    cout << "  ";
    p4(arr[3]);
    cout << endl;

    p4(arr[0]);
    cout << "  ";
    p4(arr[1]);
    cout << "     ";
    p4(arr[2]);
    cout << "  ";
    p4(arr[3]);
    cout << endl;

    p5(arr[0]);
    cout << "  ";
    p5(arr[1]);
    cout << "     ";
    p5(arr[2]);
    cout << "  ";
    p5(arr[3]);
    cout << endl;

    cout << endl << endl;
  }

  return 0;
}

