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

//If you are looking at my solution this is just a shortcut method and is not always used
vector<string> split(string input, char c) {
    stringstream test(input);
    string segment;
    vector<string> list;
    while(getline(test, segment, c))
    {
        list.push_back(segment);
    }
    return list;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;

    int n, a , b, c;
    cin >> n >> a >> b >> c;
    int dp[n+1];
    fill(dp, dp+n+1, -INT_MAX); dp[0]=0;
    for(int i = a; i < n + 1; i++) {
        dp[i] = max(dp[i], 1 + dp[i-a]);
    }
    for(int i = b; i < n + 1; i++) {
        dp[i] = max(dp[i], 1 + dp[i-b]);
    }
    for(int i = c; i < n + 1; i++) {
        dp[i] = max(dp[i], 1 + dp[i-c]);
    }
    cout << dp[n];
    return 0;
}