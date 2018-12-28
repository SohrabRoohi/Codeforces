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
    
    string t;
    cin >> t;
    string ans = "";
    int index = t.length() % 2 == 0 ? t.length() / 2 - 1 : t.length() / 2;
    ans += t[index];
    int i = 1;
    while(index + i < t.length() && index + i >= 0) {
        ans += t[index+i];
        if(i < 0) {
            i *= -1;
            i++;
        }
        else {
            i *= -1;
        }
    }
    cout << ans;
    return 0;
}