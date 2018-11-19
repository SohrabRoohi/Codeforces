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


    int n;
    cin >> n;

    vector<vector<int>> grid(2 * n + 1, vector<int>(2 * n + 1, -1));
    vector<vector<bool>> visited(2 * n + 1, vector<bool>(2 * n + 1, false));

    queue<tuple<int,int,int>> q;
    q.push(make_tuple(n, n, n));
    visited[n][n] = true;

    while(!q.empty()) {
        tuple<int,int,int> cur = q.front();
        int i = get<0>(cur);
        int j = get<1>(cur);
        int val = get<2>(cur);
        grid[i][j] = val;
        q.pop();

        if(val != 0) {
            if(!visited[i-1][j]) {
                q.push(make_tuple(i-1, j, val - 1));
                visited[i-1][j] = true;
            }
            if(!visited[i+1][j]) {
                q.push(make_tuple(i+1, j, val - 1));
                visited[i+1][j] = true;
            }
            if(!visited[i][j-1]) {
                q.push(make_tuple(i, j-1, val - 1));
                visited[i][j-1] = true;
            }
            if(!visited[i][j+1]) {
                q.push(make_tuple(i, j+1, val - 1));
                visited[i][j+1] = true;
            }
        }
    }
    for(int i = 0; i < grid.size(); i++) {
        bool found = false;
        for(int j = 0; j < grid[i].size(); j++) {
            if(grid[i][j] == -1) {
                if(found) {
                    break;
                }
                if(j != 0) {
                    cout << " ";
                }
                cout << " ";
            }
            else {
                if(j != 0) {
                    cout << " ";
                }
                cout << grid[i][j];
                found = true;
            }
        }
        cout << endl;
    }

    return 0;
}