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
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        m[v]++;
    }
    int count = 0;
    int sum = 0;
    for(int i = 1; i <= m[5]; i++) {
        sum += 5;
        if(sum % 9 == 0) {
            count = i;
        }
    }
    if(m[0] == 0) {
        cout << -1;
    }
    else if(count == 0) {
        cout << 0;
    }
    else {
        string ans = "";
        for(int i = 0; i < count; i++) {
            ans += '5';
        }
        for(int i = 0; i < m[0]; i++) {
            ans += '0';
        }
        cout << ans;
    }
    return 0;
}