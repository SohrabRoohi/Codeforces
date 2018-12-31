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

/*
 * cin
 */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;

    int64 l, r;
    cin >> l >> r;
    for(int64 j = l; j <= r; j++) {
        int64 a, b, c;
        a = j;
        b = j + 1;
        c = -1;
        for (int i = 2; i <= 50; i++) {
            if (__gcd(b, l + i) == 1 && __gcd(a, l + i) != 1) {
                c = l + i;
                break;
            }
        }
        if (b > r || c > r || c == -1) {
            continue;
        } else {
            cout << a << " " << b << " " << c;
            return 0;
        }
    }
    cout << -1;
    return 0;
}