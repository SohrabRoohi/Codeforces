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
    ifstream in("C:\\Users\\Sohrab\\CLionProjects\\CodeforcesGIT\\input.txt");
    cin.rdbuf(in.rdbuf());
    ofstream out("C:\\Users\\Sohrab\\CLionProjects\\CodeforcesGIT\\output.txt");
    cout.rdbuf(out.rdbuf());
     */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, k;
    cin >> t >> k;
    int64 div = (int64)(1e9) + 7;
    vector<int64> dp((int)1e5+1);
    vector<int64> sum((int)1e5+1);
    dp[0] = 1;
    sum[0] = dp[0];
    for(int i = 1; i < (int)1e5+1; i++) {
        dp[i] = (dp[i-1] + (i >= k ? dp[i-k]: 0)) % div;
        sum[i] = (sum[i-1] + dp[i]) % div;
    }
    for(int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        int64 f = sum[b] + div - sum[a-1];
        int64 ans = f % div;
        cout << ans << endl;
    }
    return 0;
}