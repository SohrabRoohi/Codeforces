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

    int maxS = 0;
    string gram = "";
    unordered_map<string, int> m;
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n - 1; i++) {
        string cur = "";
        cur += s[i];
        cur += s[i+1];
        m[cur]++;
        if(m[cur] > maxS) {
            maxS = m[cur];
            gram = cur;
        }
    }
    cout << gram;
    return 0;
}