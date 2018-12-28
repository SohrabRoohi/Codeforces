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
    int left = 0;
    int right = 0;
    vector<int> L;
    vector<int> R;
    for(int i = 0; i < n ; i++) {
        int l, r;
        cin >> l >> r;
        L.push_back(l);
        R.push_back(r);
        left += l;
        right += r;
    }
    int cur = abs(left-right);
    int index = 0;
    for(int i = 0; i < n; i++) {
        int lc = L[i];
        int rc = R[i];
        int tempL = left - lc + rc;
        int tempR = right - rc + lc;
        if(abs(tempL-tempR) > cur) {
            index = i + 1;
            cur = abs(tempL-tempR);
        }
    }
    cout << index;
    return 0;
}