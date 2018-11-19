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
    for(int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    int heights[n+1] = {};
    for(int i = 0; i < k; i++) {
        heights[0] += a[i];
    }
    for(int i = 1; i <= n - k; i++) {
        heights[i] = heights[i-1] - a[i-1] + a[i+k-1];
    }
    int min = heights[0];
    int index = 0;
    for(int i = 0; i <= n - k; i++) {
        if(heights[i] < min) {
            min = heights[i];
            index = i;
        }
    }
    cout << index + 1;
    return 0;
}