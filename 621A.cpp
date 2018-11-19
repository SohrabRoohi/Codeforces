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

    int64 oddCount = 0;
    int64 minOdd = INT_MAX;
    int64 sum = 0;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        if(v % 2 == 1) {
            oddCount++;
            if(v < minOdd) {
                minOdd = v;
            }
        }
        sum += v;
    }
    if(oddCount % 2 == 1) {
        cout << sum - minOdd;
    }
    else {
        cout << sum;
    }

    return 0;
}