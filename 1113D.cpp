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

bool isPalindrome(string &s) {
    for(int i = 0; i < s.length() / 2; i++) {
        if(s[i] != s[s.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    int64 ans = -1;
    for(int i = 0; i < s.length() / 2; i++) {
        if(s[i] != s[0]) {
            ans = 2;
            break;
        }
    }
    for(int i = 0; i < s.length() - 1; i++) {
        string left = s.substr(i+1, s.length() - i + 1);
        string right = s.substr(0,i+1);
        string cur = left + right;
        if(isPalindrome(cur) && cur != s) {
            ans = 1;
        }
    }
    if(ans == -1) {
        cout << "Impossible";
    }
    else {
        cout << ans;
    }

    return 0;
}