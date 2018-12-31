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

    int n, k;
    cin >> n >> k;
    VI a;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    int index = 0;
    int sub = 0;
    for(int i = 0; i < k; i++) {
        if(index < a.size()) {
            while (a[index] - sub <= 0) {
                a[index] = 0;
                index++;
                if(index >= a.size()) {
                    break;
                }
            }
        }
        if(index < a.size()) {
            a[index] -= sub;
        }
        if(index >= a.size()) {
            cout << 0 << endl;
        }
        else {
            cout << a[index] << endl;
            sub += a[index];
            a[index] = 0;
        }
        index++;
    }
    return 0;
}