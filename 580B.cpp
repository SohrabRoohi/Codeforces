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

/*
    ifstream in("C:\\Users\\Sohrab\\CLionProjects\\CodeforcesGIT\\input.txt");
    cin.rdbuf(in.rdbuf());
    ofstream out("C:\\Users\\Sohrab\\CLionProjects\\CodeforcesGIT\\output.txt");
    cout.rdbuf(out.rdbuf());
     */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, d;
    cin >> n >> d;
    vector<pair<int64,int64>> a;
    for(int i = 0; i < n; i++) {
        int64 m, s;
        cin >> m >> s;
        a.push_back(make_pair(m, s));
    }
    sort(a.begin(), a.end());
    int64 l = 0;
    int64 r = 0;
    int64 sum = 0;
    int64 maxV = -INT_MAX;
    while(l <= r && l < a.size() && r < a.size()) {
        if(a[r].first - a[l].first >= d) {
            sum -= a[l].second;
            l++;
        }
        else {
            sum += a[r].second;
            r++;
        }
        maxV = max(sum, maxV);
    }
    cout << maxV;
    return 0;
}