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
    vector<int64> h;
    for(int i = 0; i < n; i++) {
        int64 v;
        cin >> v;
        h.push_back(v);
    }
    vector<int64> maxV(n);
    maxV[n-1] = h[n-1];
    for(int i = h.size() - 2; i >= 0; i--) {
        maxV[i] = max(h[i], maxV[i+1]);
    }
    for(int i = 0; i < n - 1; i++) {
        cout << max((int64)0, maxV[i+1] - h[i] + 1) << " ";
    }
    cout << 0;
    return 0;
}