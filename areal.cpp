#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
typedef unsigned long int ulint;

ulint n;

int main() {
    cin >> n;
    cout << setprecision(10) << sqrt(n) * 4 << endl;

    return 0;
}

