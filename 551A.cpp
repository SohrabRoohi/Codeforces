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
    VI place(n, -1);
    priority_queue<pair<int,int>> levels;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        levels.push(make_pair(v, i));
    }
    int cur = 1;
    int repeats = 0;
    int prev = -1;
    while(!levels.empty()) {
        pair<int,int> now = levels.top();
        levels.pop();
        if(prev == -1) {
            place[now.second] = cur;
        }
        else if(prev == now.first) {
            repeats++;
            place[now.second] = cur;

        }
        else {
            cur += repeats + 1;
            repeats = 0;
            place[now.second] = cur;
        }
        prev = now.first;
    }
    for(int i : place) {
        cout << i << " ";
    }
    return 0;
}