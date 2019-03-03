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
    if(k >= 2) {
        cout << "Yes";
        return 0;
    }
    VI a, b;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        a.push_back(v);
    }
    for(int i = 0; i < k; i++) {
        int v;
        cin >> v;
        b.push_back(v);
    }
    bool inc = true;
    if(a[0] == 0) {
        a[0] = b[0];
    }
    for(int i = 1; i < a.size(); i++) {
        if(a[i] == 0) {
            a[i] = b[0];
        }
        if(a[i] < a[i-1]) {
            inc = false;
        }
    }
    cout << (inc ? "No" : "Yes");
    return 0;
}