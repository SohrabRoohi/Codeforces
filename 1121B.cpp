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
    
    int n;
    cin >> n;
    vector<int64> v;
    for(int i = 0; i < n; i++) {
        int64 vi;
        cin >> vi;
        v.push_back(vi);
    }
    sort(v.begin(), v.end());
    unordered_map<int,set<int>> m;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            int64 f = v[i];
            int64 s = v[j];
            int64 sum = f + s;
            if(!m[sum].count(f) && !m[sum].count(s)) {
                m[sum].insert(f);
                m[sum].insert(s);
            }
        }
    }
    int64 ans = 0;
    for(auto p : m) {
        ans = max(ans, (int64)p.second.size() / 2);
    }
    cout << ans;
    return 0;
}