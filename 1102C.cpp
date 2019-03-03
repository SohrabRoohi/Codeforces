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
    
    int n, x, y;
    cin >> n >> x >> y;
    if(x <= y) {
        int ans = 0;
        VI a;
        for(int i = 0; i < n; i++) {
            int v;
            cin >> v;
            if(v <= x) {
                a.push_back(v);
            }
        }
        sort(a.begin(), a.end());
        int start = a.size() - 1;
        while(start >= 0) {
            ans++;
            start--;
            if(start < 0) {
                break;
            }
            a[start] += y;
            if(a[start] > x) {
                start--;
            }
        }
        cout << ans;
    }
    else {
        cout << n;
    }
    return 0;
}