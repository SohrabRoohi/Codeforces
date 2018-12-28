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
    
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m+1);
    int sum[n+1] = {};
    for(int i = 0; i < n; i++) {
        int s, r;
        cin >> s >> r;
        a[s].push_back(r);
    }
    for(int i = 1; i <= m; i++) {
        sort(a[i].rbegin(), a[i].rend());
        int cur = 0;
        for(int j = 0; j < a[i].size(); j++) {
            cur += a[i][j];
            sum[j+1] += max(0, cur);
        }
    }
    int maxV = 0;
    for(int i = 1; i <= n; i++) {
        maxV = max(maxV, sum[i]);
    }
    cout << maxV;
    return 0;
}