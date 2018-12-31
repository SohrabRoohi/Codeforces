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
    
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n, '.'));
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    queue<pair<int,int>> q;
    visited[0][0] = true;
    q.push(make_pair(0,0));
    int answer = 0;
    while(!q.empty()) {
        pair<int,int> p = q.front();
        int i = p.first;
        int j = p.second;
        q.pop();
        grid[i][j] = 'C';
        answer++;

        if(i + 1 < n && j + 1 < n) {
            if(!visited[i+1][j+1]) {
                q.push(make_pair(i+1, j+1));
                visited[i+1][j+1] = true;
            }
        }
        if(i - 1 >= 0 && j + 1 < n) {
            if(!visited[i-1][j+1]) {
                q.push(make_pair(i-1, j+1));
                visited[i-1][j+1] = true;
            }
        }
        if(i + 1 < n && j - 1 >= 0) {
            if(!visited[i+1][j-1]) {
                q.push(make_pair(i+1, j-1));
                visited[i+1][j-1] = true;
            }
        }
        if(i - 1 >= 0 && j - 1 >= 0) {
            if(!visited[i-1][j-1]) {
                q.push(make_pair(i-1, j-1));
                visited[i-1][j-1] = true;
            }
        }
    }
    cout << answer << endl;
    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid[i].size(); j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}