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
    int y = 0;
    for(int i = 0; i < n; i++) {
        int t;
        string dir;
        cin >> t >> dir;
        if(dir == "East") {
            if(y == 0 || y == 20000) {
                cout << "NO";
                return 0;
            }
        }
        else if(dir == "West") {
            if(y == 0 || y == 20000) {
                cout << "NO";
                return 0;
            }
        }
        else if(dir == "North") {
            y -= t;
            if(y < 0) {
                cout << "NO";
                return 0;
            }
        }
        else if(dir == "South") {
            y += t;
            if(y > 20000) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << (y == 0 ? "YES" : "NO");
    return 0;
}