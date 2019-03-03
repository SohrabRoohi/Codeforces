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
    vector<int64> a, c;
    for(int i = 0; i < n; i++) {
        int64 v;
        cin >> v;
        a.push_back(v);
    }
    for(int i = 0; i < n; i++) {
        int64 v;
        cin >> v;
        c.push_back(v);
    }
    priority_queue<pair<int64,int64>, vector<pair<int64,int64>>, greater<pair<int64,int64>>> p;
    for(int i = 0; i < n; i++) {
        pair<int64,int64> in = make_pair(c[i], i);
        p.push(in);
    }
    for(int i = 0; i < m; i++) {
        int64 cost = 0;
        int64 t, d;
        cin >> t >> d;
        int64 amount = min(d, a[t-1]);
        cost += amount * c[t-1];
        a[t-1] -= amount;
        d -= amount;
        while(d > 0) {
            if(p.empty()) {
                cost = 0;
                break;
            }
            pair<int64,int64> pp = p.top();
            p.pop();
            int64 index = pp.second;
            int64 amount2 = min(d, a[pp.second]);
            cost += amount2 * c[pp.second];
            a[pp.second] -= amount2;
            d -= amount2;
            if(a[pp.second] > 0) {
                p.push(pp);
            }
        }
        cout << cost << endl;
    }
    return 0;
}