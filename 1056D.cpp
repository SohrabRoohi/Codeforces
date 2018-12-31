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

int dfs(vector<pair<int,vector<int>>>* adj, int start) {
    if((*adj)[start].second.size() == 0) {
        (*adj)[start].first = 1;
        return 1;
    }
    for(int i = 0; i < (*adj)[start].second.size(); i++) {
        (*adj)[start].first = max((*adj)[start].first, 1 + dfs(adj, (*adj)[start].second[i]));
    }
    return (*adj)[start].first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<pair<int,vector<int>>> adj(n+1);
    for(int i = 2; i <= n; i++){
        int v;
        cin >> v;
        adj[v].second.push_back(i);
        adj[v].first = 0;
    }
    dfs(&adj, 1);
    vector<int> answer;
    stack<int> s;
    s.push(1);
    while(!s.empty()) {
        int cur = s.top();
        answer.push_back(adj[cur].first);
        s.pop();
        for(int i = 0; i < adj[cur].second.size(); i++) {
            s.push(adj[cur].second[i]);
        }
    }
    sort(answer.begin(), answer.end());
    for(int i : answer) {
        cout << i << " ";
    }
    return 0;
}