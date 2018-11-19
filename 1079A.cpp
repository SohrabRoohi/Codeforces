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
    int total = 0;
    unordered_map<int,int> utensils;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        utensils[v]++;
        total++;
    }

    int maxV = -1;
    for(pair<int,int> p : utensils) {
        maxV = max(maxV, p.second);
    }
    int minimumCount = (int)ceil((double)maxV / k);
    int needed = minimumCount * k * utensils.size();
    cout << needed - total;


    return 0;
}