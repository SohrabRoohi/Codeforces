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
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int64 n, m ,k;
        cin >> n >> m >> k;
        int64 optimalDiagonal = min(n,m);
        int64 maxDiagonal = optimalDiagonal;
        int64 difference = max(n,m) - optimalDiagonal;
        int edge = difference % 2 == 0 ? 0 : 1;
        if(difference % 2 == 0) {
            maxDiagonal += difference;
        }
        else {
            maxDiagonal += difference - 1;
        }
        int64 movesLeft = k;
        movesLeft -= difference;
        movesLeft -= optimalDiagonal;
        if(movesLeft < 0) {
            cout << -1 << endl;
            continue;
        }
        if(movesLeft % 2 == 0) {
            maxDiagonal += movesLeft;
        }
        else {
            if(edge == 1) {
                maxDiagonal += movesLeft;
            }
            else {
                maxDiagonal += movesLeft - 2;
            }
        }
        cout << maxDiagonal << endl;
    }
    
    return 0;
}