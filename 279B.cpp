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
    int64 t;
    cin >> n >> t;

    VI a;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        a.push_back(v);
    }

    int left = 0;
    int right = 0;

    int cur = a[0];
    int length = 0;
    while(right < a.size() && left < a.size()) {
        if(cur > t) {
            if(left == right) {
                cur -= a[left];
                left++;
                right++;
                cur += a[left];
            }
            else {
                left++;
                cur -= a[left - 1];
            }
        }
        else {
            right++;
            cur += a[right];
        }
        length = max(length, right - left);
    }
    cout << length;
    return 0;
}