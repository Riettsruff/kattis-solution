#include <iostream>
using namespace std;
typedef unsigned int uint;

uint n, d;

int main() {
    while(true) {
        cin >> n >> d;

        if(n == 0 && d == 0) break;

        cout << n/d << " " << n%d << " / " << d << endl;

    }

    return 0;
}
