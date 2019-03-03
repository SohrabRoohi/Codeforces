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
void dfs(vector<set<int>> &languages, vector<bool> &visited, int start) {
    for(int i : languages[start]) {
        if(!visited[i]) {
            visited[i] = true;
            dfs(languages, visited, i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector<set<int>> languages(m+1);
    vector<bool> spoken(m+1, false);
    int zero = 0;
    for(int i = 0; i < n; i++) {
        int l;
        cin >> l;
        if(l == 0) {
            zero++;
        }
        VI a;
        for(int j = 0; j < l; j++) {
            int v;
            cin >> v;
            a.push_back(v);
            spoken[v] = true;
        }
        for(int j = 0; j < ((int)a.size() - 1); j++) {
            for(int k = j + 1; k < ((int)a.size()); k++) {
                languages[a[j]].insert(a[k]);
                languages[a[k]].insert(a[j]);
            }
        }
    }
    vector<bool> visited(m+1, false);
    int count = 0;
    for(int i = 1; i < visited.size(); i++) {
        if (!visited[i] && spoken[i]) {
            count++;
            int start = i;
            dfs(languages, visited, start);
        }
    }
    cout << max(0,count - 1) + zero;
    return 0;
}