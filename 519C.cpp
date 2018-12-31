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

    int n, m;
    cin >> n >> m;
    int groups = 0;
    while(n >= 1 && m >= 2 || n >= 2 && m >= 1) {
        if(n >= m) {
            n -= 2;
            m -= 1;
        }
        else {
            n -= 1;
            m -= 2;
        }
        groups++;
    }
    cout << groups;
    return 0;
}