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

int dfs(vector<vector<int>> &tree, int index) {
    if(tree[index].empty()) {
        return 1;
    }
    int count = 0;
    for(int i = 0; i < tree[index].size(); i++) {
        count += dfs(tree, tree[index][i]);
    }
    if(count < 3) {
        cout << "No";
        std::exit(0);
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<vector<int>> tree(n+1);
    for(int i = 2; i <= n; i++) {
        int pi;
        cin >> pi;
        tree[pi].push_back(i);
    }
    dfs(tree, 1);
    cout << "Yes";
    return 0;
}