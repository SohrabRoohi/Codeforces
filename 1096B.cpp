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
    char first = s[0];
    char last = s[s.length() - 1];
    int64 count = 1;
    int64 firstCount = 0;
    int64 lastCount = 0;
    for(int i = 0; i < s.length() - 1 && s[i] == first; i++) {
        count++;
        count %= 998244353;
        firstCount++;
    }
    for(int i = s.length() - 1; i >= 0 && s[i] == last; i--) {
        count++;
        count %= 998244353;
        lastCount++;
    }
    if(first == last) {
        count += firstCount * lastCount;
        count %= 998244353;
    }
    cout << count;
    return 0;
}