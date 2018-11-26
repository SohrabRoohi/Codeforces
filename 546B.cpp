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
    map<int,int> m;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        m[v]++;
    }
    int added = 0;
    for(pair<int,int> p : m) {
        if(p.second > 1) {
            if(m.count(p.first + 1)) {
                m[p.first + 1] += p.second - 1;
            }
            else {
                m[p.first + 1] = p.second - 1;
            }
            added += p.second - 1;
        }
    }
    cout << added;
    return 0;
}