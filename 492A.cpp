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
    
    int n;
    cin >> n;
    int dp[10000];
    int sum = 1;
    int num = 1;
    dp[0] = 1;
    while(sum < n) {
        dp[num] = dp[num-1] + num + 1;
        sum += dp[num];
        num++;
    }
    if(sum > n) {
        cout << num - 1;
    }
    else {
        cout << num;
    }
    return 0;
}