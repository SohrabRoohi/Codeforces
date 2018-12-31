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
    
    string s;
    int k;
    cin >> s >> k;
    unordered_map<char,int> m;
    vector<pair<int,char>> a;
    for(int i = 0; i <= 25; i++) {
        int v;
        cin >> v;
        char cur = (char)('a' + i);
        m[cur] = v;
        a.push_back(make_pair(v, cur));
    }
    sort(a.rbegin(), a.rend());
    int ans = 0;
    for(int i = 1; i <= s.length(); i++) {
        ans += i * m[s[i-1]];
    }
    for(int i = s.length() + 1; i <= s.length() + k; i++) {
        ans += i * a[0].first;
    }
    cout << ans;
    return 0;
}