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
    map<int,int> map;
    string ans = "";
    for(int i = 0; i < m; i++) {
        int ai;
        cin >> ai;
        map[ai]++;
        if(map.size() >= n) {
            for (auto it = map.begin(); it != map.end();) {
                auto it2 = next(it);
                it->second--;
                if(it->second == 0) {
                    map.erase(it->first);
                }
                it = it2;
            }
            ans += '1';
        }
        else {
            ans += '0';
        }
    }
    cout << ans;
    return 0;
}