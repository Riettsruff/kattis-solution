#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;
typedef unsigned int uint;

uint n, m, c, ans = 0;
unordered_set <uint> cd;

int main() {
    while(true) {
        cin >> n >> m;

        if(n == 0 && m == 0) break;

        for(uint i=0; i<n; ++i) {
            cin >> c;
            cd.insert(c);
        }

        for(uint i=0; i<m; ++i) {
            cin >> c;

            if(cd.count(c)) ans++;
        }

        cout << ans << endl;
        ans = 0;
        cd.clear();
    }

    return 0;
}

