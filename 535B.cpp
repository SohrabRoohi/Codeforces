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
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '4') {
            s[i] = '0';
        }
        else {
            s[i] = '1';
        }
    }
    int64 number = (int)bitset<64>(s).to_ullong();
    int64 ans = (int)pow(2, s.length()) - 1;
    cout << ans + number;
    return 0;
}