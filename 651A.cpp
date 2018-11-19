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

    int a1, a2;
    cin >> a1 >> a2;

    int minutes = 0;
    while(a1 > 0 && a2 > 0) {
        if(a1 == 1 && a2 == 1) {
            break;
        }
        if(a1 <= 2) {
            a1 += 1;
            a2 -= 2;
        }
        else if(a2 <= 2) {
            a2 += 1;
            a1 -= 2;
        }
        else {
            a1 += 1;
            a2 -= 2;
        }
        minutes++;
    }
    cout << minutes;
    return 0;
}