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
    
    string s1, s2;
    unordered_map<char,char> m;
    cin >> s1 >> s2;
    for(int i = 0; i < 26; i++) {
        m[s1[i]] = s2[i];
    }
    string g;
    cin >> g;
    string ans = "";
    for(char c : g) {
        if(isdigit(c)) {
            ans += c;
        }
        else if(isupper(c)) {
            ans += toupper(m[tolower(c)]);
        }
        else {
            ans += m[c];
        }
    }
    cout << ans;
    return 0;
}