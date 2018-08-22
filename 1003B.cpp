/*
  Sohrab Roohi
*/

#include <bits/stdc++.h>

using namespace std;

const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, x;
    cin >> a >> b >> x;
    string s = "";
    int n = a + b;
    bool first = false;
    if(x % 2 == 1) {
        for (int i = 0; i < n; i++) {
            if (b > ceil((double) (x + 1) / 2)) {
                s += '1';
                b--;
                continue;
            }
            if (b <= x && x > 0) {
                s += '1';
                s += '0';
                i++;
                if (first) {
                    x--;
                } else {
                    first = true;
                }
                x--;
                a--;
                b--;
                continue;
            }
            if (a > 0) {
                s += '0';
                a--;
                continue;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if (b > ceil((double) (x + 1) / 2) - 1) {
                s += '1';
                b--;
                continue;
            }
            if (b <= x && x > 0 && b > 1) {
                s += '1';
                s += '0';
                i++;
                if (first) {
                    x--;
                } else {
                    first = true;
                }
                x--;
                a--;
                b--;
                continue;
            }
            if (a > 0) {
                s += '0';
                a--;
                continue;
            }
        }
        s += '1';
    }
    cout << s;
    return 0;
}