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
    
    int64 n;
    cin >> n;
    for(int i = 1; i < n; i++) {
        if(i % 3 == 0) {
            continue;
        }
        int64 cur = n - i;
        for(int j = 1; j < n; j++) {
            if(j % 3 == 0) {
                continue;
            }
            if((cur - j) % 3 != 0) {
                cout << i << " " << j << " " << cur - j;
                return 0;
            }
        }
    }
    return 0;
}