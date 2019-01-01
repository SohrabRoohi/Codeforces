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
    int n, k;
    cin >> n >> k;
    map<int64,int64> m;
    int64 minV = LLONG_MAX;
    for(int i = 0; i < n; i++) {
        int64 a;
        cin >> a;
        m[a]++;
        minV = min(a, minV);
    }
    if(k == 0) {
        if(minV != 1) {
            cout << minV - 1;
        }
        else {
            cout << -1;
        }
        return 0;
    }
    for(pair<int64,int64> p : m) {
        k -= p.second;
        if(k == 0) {
            cout << p.first;
            return 0;
        }
        else if(k < 0) {
            cout << -1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}