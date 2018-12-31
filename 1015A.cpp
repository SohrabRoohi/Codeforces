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
    vector<bool> v(m+1, false);
    for(int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        for(int j = l; j <= r; j++) {
            v[j] = true;
        }
    }
    vector<int> a;
    for(int i = 1; i <= m; i++) {
        if(!v[i]) {
            a.push_back(i);
        }
    }
    cout << a.size() << endl;
    for(int i : a) {
        cout << i << " ";
    }
    return 0;
}