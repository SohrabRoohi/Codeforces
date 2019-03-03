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
    vector<int> v;
    vector<bool> used(n, false);
    multiset<int> m;
    for(int i = 0; i < n; i++) {
        int vi;
        cin >> vi;
        v.push_back(vi);
        m.insert(vi);
    }
    sort(v.begin(), v.end());
    for(int k = 1; k <= n; k++) {
        for(int i = 0; i < v.size(); i++) {
            if(v[i] < (i / k)) {
                goto skip;
            }
        }
        cout << k;
        return 0;
        skip:
        continue;
    }
    return 0;
}