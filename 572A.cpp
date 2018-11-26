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
    
    int na, nb;
    cin >> na >> nb;
    int k, m;
    cin >> k >> m;
    vector<int64> a, b;
    for(int i = 0; i < na; i++) {
        int64 v;
        cin >> v;
        a.push_back(v);
    }
    for(int i = 0; i < nb; i++) {
        int64 v;
        cin >> v;
        b.push_back(v);
    }
    unordered_set<int64> s1;
    int64 max = 0;
    for(int i = 0; i < k; i++) {
        s1.insert(a[i]);
        max = a[i];
    }
    bool ans = true;
    for(int i = 0; i < m; i++) {
        if(s1.count(b[b.size() - 1 - i]) || b[b.size() - 1 - i] <= max) {
            ans = false;
            break;
        }
    }
    if(ans) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}