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
    vector<int64> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int64> u = v;
    sort(u.begin(), u.end());
    vector<int64> preV, preU;
    preV.push_back(v[0]);
    preU.push_back(u[0]);
    for(int i = 1; i < n; i++) {
        preV.push_back(preV[i-1] + v[i]);
        preU.push_back(preU[i-1] + u[i]);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int type, l, r;
        cin >> type >> l >> r;
        l--;
        r--;
        if(type == 1) {
            int64 leftVal = l != 0 ? preV[l-1] : 0;
            int64 rightVal = preV[r];
            cout << rightVal - leftVal;
        }
        else {
            int64 leftVal = l != 0 ? preU[l-1] : 0;
            int64 rightVal = preU[r];
            cout << rightVal - leftVal;
        }
        cout << endl;
    }
    return 0;
}