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
    string s;
    cin >> s;
    map<char,int> m;
    for(char c : s) {
        m[c]++;
    }
    for(pair<char,int> p : m) {
        if(p.second % n != 0) {
            cout << -1;
            return 0;
        }
    }
    string ans = "";
    for(int i = 0; i < n; i++) {
        for(pair<char,int> p : m) {
            for(int j = 0; j < p.second / n; j++) {
                ans += p.first;
            }
        }
    }
    cout << ans;
    return 0;
}