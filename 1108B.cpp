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
    ifstream in("C:\\Users\\Sohrab\\CLionProjects\\UFPTTryouts2018\\input.txt");
    cin.rdbuf(in.rdbuf());
    ofstream out("C:\\Users\\Sohrab\\CLionProjects\\UFPTTryouts2018\\output.txt");
    cout.rdbuf(out.rdbuf());
     */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    VI a;
    unordered_map<int,int> m;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        a.push_back(v);
        m[v]++;
    }
    sort(a.begin(), a.end());
    int y = a[a.size() - 1];
    for(int i = 1; i <= sqrt(y); i++) {
        if(y % i == 0) {
            if(i == sqrt(y)) {
                m[i]--;
            }
            else {
                m[i]--;
                m[y / i]--;
            }
        }
    }
    VI b;
    for(auto p : m) {
        for(int i = 0; i < p.second; i++) {
            b.push_back(p.first);
        }
    }
    sort(b.begin(), b.end());
    int x = b[b.size() - 1];
    cout << x << " " << y;
    return 0;
}