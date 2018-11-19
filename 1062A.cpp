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
    int total = 0;
    int chain = a[0] == 1 ? 2 : 1;
    for(int i = 1; i < a.size(); i++) {
        if(a[i] == a[i-1] + 1) {
            chain++;
            if(a[i] == 1000) {
                chain++;
            }
        }
        else {
            total = max(total, max(chain - 2, 0));
            chain = 1;
        }
    }
    total = max(total, max(chain - 2, 0));
    cout << total;
    return 0;
}