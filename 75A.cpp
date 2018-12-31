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

    int64 a, b;
    cin >> a >> b;
    string aS, bS;
    aS = to_string(a);
    bS = to_string(b);
    int64 c = a + b;
    string cS = to_string(c);
    string first = "";
    string second = "";
    string third = "";
    for(char ch : aS) {
        if(ch != '0') {
            first += ch;
        }
    }
    for(char ch : bS) {
        if(ch != '0') {
            second += ch;
        }
    }
    for(char ch : cS) {
        if(ch != '0') {
            third += ch;
        }
    }
    if(stoi(first) + stoi(second) == stoi(third)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}