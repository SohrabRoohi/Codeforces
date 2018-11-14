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

void dfs(vector<vector<char>>* grid, vector<vector<bool>>* visited, char p, int i, int j) {
    if(i < 0 || i >= grid->size() || j < 0 || j > grid->at(0).size()) {
        return;
    }
    if(grid->at(i)[j] == '.') {
        grid->at(i)[j] = p;
    }
    else {
        return;
    }
    char next = p == 'B' ? 'W' : 'B';
    dfs(grid, visited, next, i + 1, j);
    dfs(grid, visited, next, i - 1, j);
    dfs(grid, visited, next, i, j + 1);
    dfs(grid, visited, next, i, j - 1);

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid;
    for(int i = 0; i < n; i++) {
        vector<char> row;
        for(int j = 0; j < m; j++) {
            char a;
            cin >> a;
            row.push_back(a);
        }
        grid.push_back(row);
    }

    vector<vector<bool>> visited;
    for(int i = 0; i < n; i++) {
        vector<bool> row;
        for(int j = 0; j < m; j++) {
            row.push_back(false);
        }
       visited.push_back(row);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char cur = grid[i][j];
            if(!visited[i][j] && cur == '.') {
                dfs(&grid, &visited, 'B', i, j);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char cur = grid[i][j];
            cout << cur;
        }
        cout << endl;
    }
    return 0;
}