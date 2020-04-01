#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef unsigned short int usint;

usint lcp, lsb, lsr, lx, td = 0, ca = 0;
string x;
vector <string> cp;

void printAll() {
    lcp = cp.size();

    for(auto it=cp.begin(); it != cp.end(); ++it) {
        cout << *it;
    }

    cout << endl;
    td = 0;
    cp.clear();
}

int main() {
    while(getline(cin, x)) {
        ca = 0;

        if(x == "") {
            printAll();
        } else {
            lx = x.size();

            for(char c : x) {
                if(c == '*') ca++;
            }

            if(ca > 0) {
                lsr = lx - td;
                lsb = lsr - ca;

                for(usint i=0; i<lx; ++i) {
                    if(i >= lsb && i < lsr) x[i] = '*';
                    else x[i] = '.';
                }
            }

            td += ca;
            x += '\n';
            cp.push_back(x);
        }
    }

    printAll();

    return 0;
}

