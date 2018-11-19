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


int height(vector<pair<int, vector<int>>> adj, int start) {
    if(adj[start].second.size() == 0) {
        return 0;
    }
    int h = 0;
    for(int i = 0; i < adj[start].second.size(); i++) {
        int thatHeight = 1 + height(adj, adj[start].second[i]);
        h = max(h, thatHeight);
    }
    return h;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<pair<int, vector<int>>> adj(n);
    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if(p != -1) {
            adj[p - 1].second.push_back(i);
        }
        adj[i].first = p;
    }
    int groups = 0;
    for(int i = 0; i < n; i++) {
        if(adj[i].first == -1) {
            int h = height(adj, i);
            groups = max(groups, h);
        }
    }
    cout << groups + 1;
    ifstream in("test");
    return 0;
}