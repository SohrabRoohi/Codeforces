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
    vector<bool> catIndex;
    for(int i = 0; i < n; i++) {
        bool a;
        cin >> a;
        catIndex.push_back(a);
    }
    vector<pair<int,vector<int>>> adj(n+1);
    int f, s;
    for(int i = 0; i < n - 1; i++) {
        cin >> f >> s;
        adj[f].second.push_back(s);
        adj[s].second.push_back(f);
    }
    vector<int> leaves;
    bool visited[n+1] = {};

    queue<pair<int,pair<int,int>>> search;
    search.push(make_pair(1,make_pair(catIndex[0],catIndex[0])));
    visited[1] = true;
    while(!search.empty()) {
        pair<int,pair<int,int>> toAdd = search.front();
        adj[toAdd.first].first = max(toAdd.second.first, toAdd.second.second);
        search.pop();
        bool added = false;
        for(int a : adj[toAdd.first].second) {
            if(!visited[a]) {
                added = true;
                int curCats = catIndex[a-1] == true ? toAdd.second.second + 1 : 0;
                search.push(make_pair(a, make_pair(adj[toAdd.first].first, curCats)));
                visited[a] = true;
            }
        }
        if(!added) {
            leaves.push_back(toAdd.first);
        }
    }
    int paths = 0;
    for(int i = 0; i < leaves.size(); i++) {
        if(adj[leaves[i]].first <= m) {
            paths++;
        }
    }
    cout << paths;
    return 0;
}