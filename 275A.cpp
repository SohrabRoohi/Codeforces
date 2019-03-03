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
    
    int dx[5] = {1, -1, 0, 0, 0};
    int dy[5] = {0, 0, 1, -1, 0};
    vector<vector<bool>> grid(3, vector<bool>(3, true));
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int times;
            cin >> times;
            times %= 2;
            if(times) {
                for(int k = 0; k < 5; k++) {
                    int x = dx[k];
                    int y = dy[k];
                    if(i + x >= 0 && i + x < 3 && j + y >= 0 && j + y < 3) {
                        grid[i+x][j+y] = !grid[i+x][j+y];
                    }
                }
            }
        }
    }
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}