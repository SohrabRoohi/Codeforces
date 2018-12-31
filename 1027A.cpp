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
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        int n;
        string s;
        cin >> n >> s;
        for(int j = 0; j < s.length() / 2; j++) {
            int diff = abs((int)(s[j] - s[s.length() - 1 - j]));
            if(diff != 2 && diff != 0) {
                cout << "NO" << endl;
                goto next;
            }
        }
        cout << "YES" << endl;
        next:
        continue;
    }
    return 0;
}