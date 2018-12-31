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

    int r, c;
    cin >> r >> c;
    vector<vector<char>> grid;
    vector<vector<bool>> visited(r, vector<bool>(c, false));
    for(int i = 0; i < r; i++) {
        vector<char> row;
        for(int j = 0; j < c; j++) {
            char cur;
            cin >> cur;
            row.push_back(cur);
        }
        grid.push_back(row);
    }
    int eaten = 0;
    for(int i = 0; i < r; i++) {
        int rowCount = 0;
        for(int j = 0; j < c; j++) {
            char cur = grid[i][j];
            if(cur == 'S') {
                goto skip;
            }
            else {
                if(!visited[i][j]) {
                    rowCount++;
                }
            }
        }
        eaten += rowCount;
        for(int j = 0; j < c; j++) {
            visited[i][j] = true;
        }
        skip:
        continue;
    }
    for(int i = 0; i < c; i++) {
        int rowCount = 0;
        for(int j = 0; j < r; j++) {
            char cur = grid[j][i];
            if(cur == 'S') {
                goto skip2;
            }
            else {
                if(!visited[j][i]) {
                    rowCount++;
                }
            }
        }
        eaten += rowCount;
        for(int j = 0; j < r; j++) {
            visited[j][i] = true;
        }
        skip2:
        continue;
    }
    cout << eaten;
    return 0;
}