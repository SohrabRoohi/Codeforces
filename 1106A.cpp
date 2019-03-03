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
    vector<vector<char>> v;
    for(int i = 0; i < n; i++) {
        vector<char> row;
        for(int j = 0; j < n; j++) {
            char c;
            cin >> c;
            row.push_back(c);
        }
        v.push_back(row);
    }
    int ans = 0;
    for(int i = 0; i < n - 2; i++) {
        for(int j = 0; j < n - 2; j++) {
            if(v[i][j] == 'X' && v[i+2][j] == 'X' && v[i][j+2] == 'X' && v[i+1][j+1] == 'X' && v[i+2][j+2] == 'X') {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}