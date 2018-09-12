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


    int kids[3] = {};
    int n;
    cin >> n;
    vector<VI> values;
    for(int i = 0; i < 3; i++) {
        VI v;
        values.push_back(v);
    }
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        kids[t - 1]++;
        values[t - 1].push_back(i + 1);
    }
    int w = min(kids[0], min(kids[1], kids[2]));
    cout << w << endl;
    if (w > 0) {
        for (int i = 0; i < w; i++) {
            cout << values[0][i] << " " << values[1][i] << " " << values[2][i] << endl;
        }
    }
    return 0;
}