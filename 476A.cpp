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
    
    int n, m;
    cin >> n >> m;
    int twos = n / 2;
    int ones = n % 2;
    int total = twos + ones;
    if(total % m == 0) {
        cout << total;
        return 0;
    }
    int difference = total % m;
    int upperBound = total - difference + m;
    int neededSteps = upperBound - total;
    if(neededSteps > twos) {
        cout << -1;
        return 0;
    }
    cout << neededSteps + total;

    return 0;
}