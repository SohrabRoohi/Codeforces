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
    
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        int ang;
        cin >> ang;
        for(int n = 3; n <= 998244353; n++) {
            double interior = ((double)(n - 2) * 180) / n;
            if(interior < ang) {
                continue;
            }
            double small = ((double)180 - interior) / 2;
            double result = (double)ang / small;
            result -= (int)(result);
            if(abs(result) <= .00000001) {
                cout << n << endl;
                goto skip;
            }
        }
        cout << -1 << endl;
        skip:
        continue;
    }
    return 0;
}