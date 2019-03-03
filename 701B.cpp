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
    
    int64 n, m;
    cin >> n >> m;
    unordered_set<int> r, c;
    int64 left = n * n;
    for(int i = 0; i < m; i++) {
        int64 x, y;
        cin >> x >> y;
        int64 horizontal = !c.count(x) ? n - r.size() - !r.count(y): 0;
        int64 vertical = !r.count(y) ? n - c.size() - !c.count(x) : 0;
        int64 has = !c.count(x) && !r.count(y);
        int64 sub = horizontal + vertical + has;
        r.insert(y);
        c.insert(x);
        left -= sub;
        cout << left << " ";
    }
    return 0;
}