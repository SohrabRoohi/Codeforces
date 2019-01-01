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

    int n;
    cin >> n;
    vector<int64> a;
    for(int i = 0; i < n; i++) {
        int64 v;
        cin >> v;
        a.push_back(v);
    }
    vector<int64> dp(n, 0);
    dp[n-1] = a[n-1];
    int64 sum = a[n-1];
    for(int64 i = n - 2; i >= 0; i--) {
        dp[i] = a[i] + sum;
        sum = dp[i] - sum;
    }
    for(int64 i = 0; i < n; i++) {
        cout << dp[i] << " ";
    }
    return 0;
}