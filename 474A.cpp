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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string alphabet = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char s;
    string m;
    cin >> s >> m;
    int v = s == 'R' ? -1 : 1;
    for(int i = 0; i < m.length(); i++) {
        m[i] = alphabet[alphabet.find(m[i]) + v];
    }
    cout << m;
    return 0;
}