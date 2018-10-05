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
    
    int t;
    cin >> t;
    vector<double> values;
    for(int i = 3; true; i++) {
        double angle = ((double)(i-2) * 180) / i;
        values.push_back(angle);
        if(angle >= 179) {
            break;
        }
    }
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        double aD = (double)a;
        if(find(values.begin(), values.end(), a) != values.end()) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}