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
    cout.precision(16);
    cout << fixed;

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int d;
        cin >> d;
        double disc = pow(d, 2) - 4 * d;
        if(disc < 0) {
            cout << "N" << endl;
            continue;
        }
        double b = (d + sqrt(disc)) / 2;
        double a = d - b;
        cout << "Y" << " " << a << " " << b << endl;
    }
    return 0;
}