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
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n+1, 0);
    for(int i = 1; i <= n; i++) {
        int v;
        cin >> a[i];
    }
    int ans = -INT_MAX;
    for(int b = 1; b <= n; b++) {
        vector<int> test = a;
        for(int j = b; j <= n; j += k) {
            test[j] = 0;
        }
        for(int j = b; j >= 1; j -= k) {
            test[j] = 0;
        }
        int pos = 0;
        int neg = 0;
        for(int ii : test) {
            if(ii > 0) {
                pos++;
            }
            else if(ii < 0) {
                neg++;
            }
        }
        ans = max(ans, abs(pos-neg));
    }
    cout << ans;
    return 0;
}