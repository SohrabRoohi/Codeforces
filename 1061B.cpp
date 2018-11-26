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
    
    int n, m;
    cin >> n >> m;
    vector<int64> a;
    for(int i = 0; i < n; i++) {
        int64 v;
        cin >> v;
        a.push_back(v);
    }
    if(a.size() == 1) {
        cout << 0;
        return 0;
    }
    sort(a.begin(), a.end());
    int64 removed = a[0] - 1;
    int64 prev = 1;
    for(int i = 1; i < n; i++) {
        int64 diff = a[i] - prev;
        removed += diff == 0 ? prev - 1 : prev;
        prev = a[i];
    }
    cout << removed;
    return 0;
}