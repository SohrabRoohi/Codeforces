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
    unordered_map<int,int> m;
    for(int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        m[i] = p;
    }
    for(int i = 1; i <= n; i++) {
        set<int> s;
        int cur = i;
        while(true) {
            if(s.count(cur)) {
                cout << cur << " ";
                goto skip;
            }
            else {
                s.insert(cur);
                cur = m[cur];
            }
        }
        skip:
        continue;
    }
    return 0;
}