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
    vector<int64> values;
    int64 first, second;
    cin >> first >> second;
    values.push_back(first);
    values.push_back(second);
    int64 gcd = __gcd(first, second);
    for(int i = 2; i < n; i++) {
        int64 v;
        cin >> v;
        values.push_back(v);
        gcd = __gcd(gcd, v);
    }
    for(int i = 0; i < values.size(); i++) {
        int64 cur = values[i];
        int64 result = cur / gcd;
        while (result % 2 == 0) {
            result /= 2;
        }
        while (result % 3 == 0) {
            result /= 3;
        }
        if (result != 1) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}