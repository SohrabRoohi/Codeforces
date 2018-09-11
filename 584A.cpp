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
    
    int n, t;
    cin >> n >> t;
    if(n == 1 && t < 10) {
        cout << t;
        return 0;
    }
    else if(n == 1 && t == 10) {
        cout << -1;
        return 0;
    }
    string answer = "";
    if(n > 1 && t == 10) {
        for(int i = 0; i < n-1; i++) {
            answer += "1";
        }
        answer += "0";
    }
    else if(n > 1 && t < 10) {
        for(int i = 0; i < n; i++) {
            answer += to_string(t);
        }
    }
    cout << answer;
    return 0;
}