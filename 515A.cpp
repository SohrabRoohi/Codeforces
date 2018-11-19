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

    int a, b, s;
    cin >> a >> b >> s;

    int dist = abs(a) + abs(b);
    if(s < dist) {
        cout << "NO";
    }
    else if(s == dist) {
        cout << "YES";
    }
    else if(s > dist) {
        if (dist % 2 == s % 2) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }

    return 0;
}