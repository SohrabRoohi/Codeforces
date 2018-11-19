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
    vector<pair<int,int>> a;
    for(int i = 0; i < n; i++) {
        int f, s;
        cin >> f >> s;
        a.push_back(make_pair(f,s));
    }
    sort(a.begin(), a.end());
    int day = 0;
    for(int i = 0; i <  a.size(); i++) {
        int f, s;
        f = a[i].first;
        s = a[i].second;
        if(f >= day && s >= day) {
            day = min(f,s);
        }
        else if(s >= day) {
            day = s;
        }
        else {
            day = f;
        }
    }
    cout << day;
    return 0;
}