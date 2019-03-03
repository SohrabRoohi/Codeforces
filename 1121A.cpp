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
    
    int n, m,k;
    cin >> n >> m >> k;
    vector<int> p, s;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        p.push_back(v);
    }
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        s.push_back(v);
    }
    unordered_map<int,pair<int,int>> map;
    for(int i = 1; i <= m; i++) {
       map[i] = make_pair(0,0);
    }
    for(int i = 0; i < n; i++) {
        int school = s[i];
        int power = p[i];
        map[school] = max(map[school], make_pair(power,i+1));
    }
    set<int> strongest;
    for(int i = 1; i <= m; i++) {
        strongest.insert(map[i].second);
    }
    int64 ans = 0;
    for(int i = 0; i < k; i++)  {
        int v;
        cin >> v;
        if(!strongest.count(v)) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}