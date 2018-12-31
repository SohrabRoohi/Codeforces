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

    int x;
    cin >> x;
    for(int i = 1; i <= x; i++) {
        for(int j = 1; j <= x; j++) {
            double a = i;
            double b = j;
            if(b == 0) {
                continue;
            }
            if(i % j == 0) {
                if(a * b > x && a / b < x) {
                    cout << (int)a << " " << (int)b;
                    return 0;
                }
            }
        }
    }
    cout << -1;
    return 0;
}