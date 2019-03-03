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
    vector<set<int>> v(n+1);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].insert(b);
        v[b].insert(a);
    }
    priority_queue<int, vector<int>, greater<int>> q;
    vector<bool> visited(n+1, false);
    q.push(1);
    visited[1] = true;
    while(!q.empty()) {
        int cur = q.top();
        q.pop();
        cout << cur << " ";
        for(auto i : v[cur]) {
            if(!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
    return 0;
}