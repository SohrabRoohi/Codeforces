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
void dfs(VI a, int index, int angle, bool* found) {
    int o1 = angle + a[index];
    int o2 = angle - a[index];
    o1 %= 360;
    o2 = abs(o2);
    if(index == a.size() - 1) {
        if(o1 == 0) {
            cout << "YES";
            *found = true;
            std::exit(0);
        }
        if(o2 == 0) {
            cout << "YES";
            *found = true;
            std::exit(0);
        }
    }
    else {
        dfs(a, index + 1, o1, found);
        dfs(a, index + 1, o2, found);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    VI a;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        a.push_back(v);
    }
    bool* found = new bool(false);
    dfs(a, 0, 0, found);
    if(!(*found)) {
        cout << "NO";
    }
    return 0;
}