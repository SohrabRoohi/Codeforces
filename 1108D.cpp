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
    string s;
    cin >> s;
    int changes = 0;
    unordered_map<char,bool> m;
    m['R'] = true;
    m['B'] = true;
    m['G'] = true;
    for(int i = 0; i < n - 1; i++) {
        char cur = s[i];
        char next = s[i+1];
        if(cur == next) {
            changes++;
            unordered_map<char,bool> m1 = m;
            m1[cur] = false;
            if(i + 2 < n) {
                m1[s[i+2]] = false;
            }
            for(auto p : m1) {
                if(p.second) {
                    s[i+1] = p.first;
                    break;
                }
            }
        }
    }
    cout << changes << endl << s;
    return 0;
}