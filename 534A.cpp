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
    VI a;
    for(int i = 1; i <= n; i++) {
        a.push_back(i);
    }
    sort(a.begin(), a.end());
    if(n >= 4) {
        string ans = "";
        for(int i = a.size() - 1; i >= 0; i--) {
            if(a[i] % 2 == 1) {
                ans += to_string(a[i]);
                ans += " ";
            }
        }
        for(int i = a.size() - 1; i >= 0; i--) {
            if(a[i] % 2 == 0) {
                ans += to_string(a[i]);
                ans += " ";
            }
        }
        cout << n << endl;
        cout << ans;
    }
    else if(n == 3) {
        cout << 2 << endl;
        cout << 1 << " " << 3;
    }
    else if(n == 2){
        cout << 1 << endl << 1;
    }
    else if(n == 1) {
        cout << 1 << endl << 1;
    }
    return 0;
}