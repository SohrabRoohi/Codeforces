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
    
    map<int64,int64> m;
    int64 n, k;
    cin >> n >> k;
    vector<int64> v;
    vector<int64> ans;
    if(n < k) {
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < n; i++) {
        int64 a;
        cin >> a;
        m[a]++;
        if(m[a] > k) {
            cout << "NO";
            return 0;
        }
        v.push_back(a);
    }
    map<int64,int64> start;
    int64 last = NULL;
    for(pair<int64,int64> p : m) {
        if(last == NULL) {
            start[p.first] = 1;
        }
        else {
            start[p.first] = start[last] + m[last];
        }
        if(start[p.first] > k) {
            start[p.first] = 1;
        }
        last = p.first;
    }
    for(int i = 0; i < v.size(); i++) {
        if(start[v[i]] > k) {
            start[v[i]] = 1;
        }
        ans.push_back(start[v[i]]);
        start[v[i]]++;
    }
    cout << "YES" << endl;
    for(int64 i : ans) {
        cout << i << " ";
    }
    return 0;
}