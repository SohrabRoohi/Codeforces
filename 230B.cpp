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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool values[1000001];
    memset(values, true, sizeof(values));
    for (int p=2; p*p<=1000001; p++)
    {
        if (values[p]) {
            for (int i = p * 2; i <= 1000001; i += p) {
                values[i] = false;
            }
        }
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int64 num;
        cin >> num;
        if(values[(int)sqrt(num)] && num != 1 && floor(sqrt(num)) - sqrt(num) == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}