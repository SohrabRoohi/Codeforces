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
    cin >> s;
    int m;
    cin >> m;
    VI values;
    for(int i = 0; i < s.length() - 1; i++) {
        int val = i > 0 ? values[i-1] : 0;
        if(s[i] == s[i+1]) {
            values.push_back(1 + val);
        }
        else {
            values.push_back(val);
        }
    }
    for(int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        int val = l - 2 < 0 ? 0 : values[l-2];
        int counts = values[r-2] - val;
        cout << counts << endl;
    }
    return 0;
}