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
    
    int n;
    cin >> n;
    int a = 0;
    int b = 0;
    int c = 0;
    for(int i = 0; i < n; i++) {
        int an;
        cin >> an;
        a += an;
    }
    for(int i = 0; i < n-1; i++) {
        int bn;
        cin >> bn;
        b += bn;
    }
    for(int i = 0; i < n-2; i++) {
        int cn;
        cin >> cn;
        c += cn;
    }
    cout << a - b << endl;
    cout << b - c << endl;
    return 0;
}