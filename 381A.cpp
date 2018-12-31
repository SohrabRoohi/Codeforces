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

    list<int> vals;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        vals.push_back(v);
    }

    int s = 0;
    int d = 0;

    int i = 0;
    while(!vals.empty()) {
        int f = vals.front();
        int e = vals.back();
        int val = max(f, e);
        if(f > e) {
            vals.erase(vals.begin());
        }
        else {
            vals.erase(--vals.end());
        }
        if(i % 2 == 0) {
            s += val;
        }
        else {
            d += val;
        }
        i++;
    }

    cout << s << " " << d;
    return 0;
}