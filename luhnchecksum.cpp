#include <iostream>
#include <string>
using namespace std;
typedef unsigned short int usint;

usint n, ls, t, sum = 0;
string s;

int main() {
    cin >> n;
    cin.ignore();

    while(n--) {
        getline(cin, s);
        ls = s.size();

        if(ls % 2 == 0) {
            for(usint i=0; i<ls; i+=2) {
                t = (s[i]-'0')*2;

                if(t > 9) {
                    while(t > 0) {
                        sum += t%10;
                        t /= 10;
                    }
                } else {
                    sum += t;
                }

                sum += (s[i+1]-'0');
            }
        } else {
            sum += s[ls-1]-'0';
            for(usint i=0; i<ls-1; i+=2) {
                sum += (s[i]-'0');
                t = (s[i+1]-'0') * 2;

                if(t > 9) {
                    while(t > 0) {
                        sum += t%10;
                        t /= 10;
                    }
                } else {
                    sum += t;
                }
            }
        }

        cout << (sum % 10 == 0 ? "PASS" : "FAIL") << endl;
        sum = 0;
    }

    return 0;
}

