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
 * cin
 */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;

    string s;
    cin >> s;
    set<string> set1;
    for(int i = 0; i <= s.size(); i++) {
        for(char c = 'a'; c <= 'z'; c++) {
            string copy = s;
            copy.insert(i,string(1,c));
            set1.insert(copy);
        }
    }
    cout << set1.size();
    return 0;
}