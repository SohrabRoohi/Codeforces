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
    
    int m, s;
    cin >> m >> s;
    int numLeft = m;
    string max = "";
    string min = "";
    for(int i = 0; i < m; i++) {
        int toAdd = s  - numLeft;
        if(toAdd < 0) {
            max = "-1";
            min = "-1";
            break;
        }
        if(numLeft == 1) {
            toAdd = s;
            if(toAdd > 9) {
                max = "-1";
                min = "-1";
                break;
            }
        }
        if(toAdd > 9) {
            toAdd = 9;
        }
        s -= toAdd;
        max += to_string(toAdd);
        numLeft--;
    }
    min = max;
    if(min != "-1") {
        reverse(min.begin(), min.end());
    }
    cout << min << " " << max;
    return 0;
}