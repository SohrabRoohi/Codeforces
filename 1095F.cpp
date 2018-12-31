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
    
    int n, m;
    cin >> n >> m;
    vector<pair<int64,int64>> a, b;
    for(int i = 0; i < n; i++) {
        int64 v;
        cin  >> v;
        a.push_back(make_pair(v,i));
        b.push_back(make_pair(v,i));
    }
    sort(b.begin(), b.end());
    int64 lowest = b[0].first;
    int64 lowestIndex = b[0].second;
    int64 ans = 0;
    unordered_map<int64,set<int64>> map1;
    for(int i = 1; i < b.size(); i++) {
        map1[b[i].second].insert(0);
        int64 cur = b[i].first + lowest;
        ans += cur;
    }
    vector<tuple<int64,int64,int64>> v; //w, x, y
    for(int i = 0; i < m; i++) {
        int64 x, y, w;
        cin >> x >> y >> w;
        v.push_back(make_tuple(w,x,y));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        tuple<int64,int64,int64> t = v[i];
        int64 w = get<0>(t);
        int64 x = get<1>(t);
        int64 y = get<1>(t);

        int64 xVal = x - 1 != lowestIndex ? a[x-1].first + lowest : 0;
        int64 yVal = y - 1 != lowestIndex ? a[y-1].first + lowest : 0;

        if(!map1[x-1].count(y-1) || !map1[y-1].count(x-1)) {
            if (w < xVal && xVal <= yVal) {
                ans -= xVal;
                ans += w;
                map1[x - 1].erase(0);
                map1[x - 1].insert(y - 1);
                map1[y - 1].insert(x - 1);
            } else if (w < yVal) {
                ans -= yVal;
                ans += w;
                map1[y - 1].erase(0);
                map1[x - 1].insert(y - 1);
                map1[y - 1].insert(x - 1);
            }
        }
    }
    cout << ans;
    return 0;
}