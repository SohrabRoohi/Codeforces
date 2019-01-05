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
    vector<bool> good(n, true);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int a;
            cin >> a;
            if(a == 1) {
                good[i] = false;
            }
            else if(a == 2) {
                good[j] = false;
            }
            else if(a == 3) {
                good[i] = false;
                good[j] = false;
            }
        }
    }
    int ans = 0;
    for(bool b : good) {
        if(b) {
            ans++;
        }
    }
    cout << ans << endl;
    for(int i = 0; i < good.size(); i++) {
        if(good[i]) {
            cout << i + 1 << " ";
        }
    }
    return 0;
}