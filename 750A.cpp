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
    int minutesLeft = 4 * 60;
    int problemNumber = 1;
    while(minutesLeft - problemNumber * 5 >= k && problemNumber <= n) {
        minutesLeft -= problemNumber * 5;
        problemNumber++;
    }
    cout << problemNumber - 1;
    return 0;
}