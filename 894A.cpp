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
    vector<int> Q(s.length(), 0);
    Q[0] = s[0] == 'Q';
    for(int i = 1; i < s.length(); i++) {
        Q[i] = Q[i-1] + (s[i] == 'Q');
    }
    int number = 0;
    for(int i = 1; i < s.length(); i++) {
        if(s[i] == 'A') {
            number += Q[i] * (Q[s.length() - 1] - Q[i]);
        }
    }
    cout << number;
    return 0;
}