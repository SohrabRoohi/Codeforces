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
    
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        int left = l % 2 == 0 ? l : -l;
        int distance = r - l;
        if(distance == 0) {
            cout << left << endl;
            continue;
        }
        if(l % 2 == r % 2) {
            if(signbit(l) == -1) {
                cout << -distance;
            }
            else {
                cout << distance;
            }
        }
        else {
            if(signbit(l) == -1) {
                cout << distance;
            }
            else {
                cout << -distance;
            }
        }
        cout << endl;
    }
    return 0;
}