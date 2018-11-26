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
    
    int64 n, m;
    cin >> n >> m;
    int64 left = m - 1;
    int64 right = m + 1;
    if(left < 1) {
        left = m;
    }
    if(right > n) {
        right = m;
    }
    if(left > n + 1 - right) {
        cout << left;
    }
    else if(left == n + 1 - right) {
        if(left == m) {
            cout << right;
        }
        else if(right == m) {
            cout << left;
        }
        else {
            cout << left;
        }
    }
    else {
        cout << right;
    }
    return 0;
}