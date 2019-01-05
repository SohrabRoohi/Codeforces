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
    
    int64 n;
    cin >> n;
    vector<vector<int64>> grid(n+1);
    vector<int64> p(n+1);
    vector<int64> a(n+1, 0);
    for(int i = 2; i <= n; i++) {
        int64 v;
        cin >> v;
        grid[v].push_back(i);
        p[i] = v;
    }
    vector<int64> s(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    int start = 1;
    queue<int64> q;
    q.push(start);
    int64 sum = 0;
    while(!q.empty()) {
        int64 cur = q.front();
        q.pop();
        if(s[cur] != -1) {
            if(cur == 1) {
                a[cur] = s[cur];
            }
            else {
                a[cur] = s[cur] - s[p[cur]];
            }
        }
        else if(s[cur] == -1) {
            int64 minV = INT_MAX;
            for(int i = 0; i < grid[cur].size(); i++) {
                if(s[grid[cur][i]] != -1 && s[grid[cur][i]] < minV) {
                    minV = s[grid[cur][i]];
                }
            }
            if(minV == INT_MAX) {
                minV = s[p[cur]];
            }
            a[cur] = minV - s[p[cur]];
            s[cur] = s[p[cur]] + a[cur];
        }
        if(s[cur] < s[p[cur]]) {
            cout << -1;
            return 0;
        }
        for(int i = 0; i < grid[cur].size(); i++) {
            q.push(grid[cur][i]);
        }
    }
    for(int64 i : a) {
        sum += i;
    }
    cout << sum;
    return 0;
}