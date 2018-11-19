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
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        a.push_back(v);
    }

    int last = a[a.size() - 1];
    if(last == 0) {
        cout << "UP";
        return 0;
    }
    else if(last == 15) {
        cout << "DOWN";
        return 0;
    }
    if(a.size() >= 2) {
        int penult = a[a.size() - 2];
        if(penult < last) {
            cout << "UP";
            return 0;
        }
        else if(penult > last) {
            cout << "DOWN";
            return 0;
        }
    }
    cout << -1;
    return 0;
}