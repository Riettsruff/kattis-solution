#include <iostream>
#include <string>
using namespace std;
typedef unsigned short int usint;

usint ls1;
string s1, s2;

int main() {
    cin >> s1 >> s2;

    ls1 = s1.size();

    if(s1[ls1-1] == 'a' || s1[ls1-1] == 'i' ||
         s1[ls1-1] == 'u' || s1[ls1-1] == 'o') {
        s1[ls1-1] = 'e';
        s1 += 'x';
    } else if(s1[ls1-1] == 'e') {
        s1 += 'x';
    } else if(s1[ls1-1] != 'x' && s1[ls1-2] != 'e') {
        s1 += "ex";
    }

    cout << s1 << s2 << endl;

    return 0;
}

