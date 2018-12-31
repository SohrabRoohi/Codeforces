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
    vector<vector<char>> grid(n, vector<char>(n));
    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < n; j++) {
            char c;
            cin >> c;
            grid[i][j] = c;
        }
    }
    char d = grid[0][0];
    char nd = grid[0][1];
    if(d == nd) {
        cout << "NO";
        return 0;
    }
    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j || i + j == n - 1) {
                if(grid[i][j] != d) {
                    cout << "NO";
                    return 0;
                }
            }
            else {
                if(grid[i][j] != nd) {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES";
    return 0;
}