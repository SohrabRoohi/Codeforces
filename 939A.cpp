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
    unordered_map<int,int> m;
    for(int i = 1; i <= n; i++) {
        int v;
        cin >> v;
        m[i] = v;
    }
    for(int i = 1; i <= n; i++) {
        if(m[m[m[i]]] == i) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}