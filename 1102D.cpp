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
    string s;
    cin >> n >> s;
    int goal = n / 3;
    map<char,int> m, still;
    m['0'] = 0;
    m['1'] = 0;
    m['2'] = 0;
    for(char c : s) {
        m[c]++;
    }
    for(int i = 0; i < s.length() && m['0'] < goal; i++) {
        if(s[i] != '0' && m[s[i]] > goal) {
            m[s[i]]--;
            s[i] = '0';
            m['0']++;
        }
    }
    int zero = 0;
    for(int i = 0; i < s.length() && m['1'] < goal; i++) {
        if(s[i] == '0') {
            zero++;
        }
        if(s[i] == '0' && m[s[i]] > goal && zero > goal) {
            m[s[i]]--;
            s[i] = '1';
            m['1']++;
        }
        else if(s[i] == '2' && m[s[i]] > goal) {
            m[s[i]]--;
            s[i] = '1';
            m['1']++;
        }
    }
    for(int i = s.length() - 1; i >= 0 && m['2'] < goal; i--) {
        if(s[i] != '2' && m[s[i]] > goal) {
            m[s[i]]--;
            s[i] = '2';
            m['2']++;
        }
    }
    cout << s;
    return 0;
}