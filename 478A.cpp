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

    int sum = 0;
    for(int i = 0; i < 5; i++) {
        int c;
        cin >> c;
        sum += c;
    }
    if(sum % 5 == 0 && sum != 0) {
        cout << sum / 5;
    }
    else {
        cout << -1;
    }
    
    return 0;
}