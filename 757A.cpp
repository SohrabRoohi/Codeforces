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
    string s;
    cin >> s;
    unordered_map<char,int> m;
    for(char c : s) {
        m[c]++;
    }
    int ans = INT_MAX;
    string compare = "Bulbasaur";
    for(char c : compare) {
        if(c == 'u' || c == 'a') {
            ans = min(ans, m[c] / 2);
        }
        else {
            ans = min(ans, m[c]);
        }
    }
    cout << ans;
    return 0;
}