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
    bool bw = true;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char c;
            cin >> c;
            if(c == 'C' || c == 'M' || c == 'Y') {
                bw = false;
                goto end;
            }
        }
    }
    end:
    if(bw) {
        cout << "#Black&White";
    }
    else {
        cout << "#Color";
    }
    return 0;
}