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

    int n, k;
    cin >> n >> k;
    VI a;
    for(int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a.push_back(ai);
    }
    int score = a[k-1];
    int i = 0;
    while(a[i] >= score && a[i] != 0 && i < n ) {
        i++;
    }
    cout << i;

    return 0;
}