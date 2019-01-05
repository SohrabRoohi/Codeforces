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
    
    int64 n;
    cin >> n;
    set<int64> ans;
    ans.insert(1);
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            ans.insert(((double)n / i) * (((double)n + 1 - i + 1) / 2));
            ans.insert(((double)n / ((double)n / i)) * (((double)n + 1 - ((double) n / i) + 1) / 2));
        }
    }
    for(int64 i : ans) {
        cout << i << " ";
    }
    return 0;
}