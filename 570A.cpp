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

    int n, m;
    cin >> n >> m;
    map<int,int> wins;
    int index = 1;
    int max = 0;
    for(int i = 0; i < m; i++) {
        map<int,int> can;
        int maxV = -1;
        int index = -1;
        for(int j = 1; j <= n; j++) {
            int v;
            cin >> v;
            can[j] += v;
        }
        for(int j = 1; j <= n; j++) {
            if(can[j] > maxV) {
                maxV = can[j];
                index = j;
            }
        }
        wins[index]++;
    }
    int winMax = -1;
    int winIndex = -1;
    for(pair<int,int> p : wins) {
        if(p.second > winMax) {
            winMax = p.second;
            winIndex = p.first;
        }
    }
    cout << winIndex;
    return 0;
}