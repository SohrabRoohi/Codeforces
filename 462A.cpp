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
    vector<vector<char>> grid(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            char c;
            cin >> c;
            grid[i].push_back(c);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int count = 0;
            if(i - 1 >= 0) {
                if(grid[i-1][j] == 'o') {
                    count++;
                }
            }
            if(i + 1 < n) {
                if(grid[i+1][j] == 'o') {
                    count++;
                }
            }
            if(j - 1 >= 0) {
                if(grid[i][j-1] == 'o') {
                    count++;
                }
            }
            if(j + 1 < n) {
                if(grid[i][j+1] == 'o') {
                    count++;
                }
            }
            if(count % 2 != 0) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}