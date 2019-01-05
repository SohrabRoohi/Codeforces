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
    
    int y, b, r;
    cin >> y >> b >> r;
    int maximum = 0;

    if(b >= y + 1 && r >= y + 2) {
        maximum = max(maximum, y + y + 1 + y + 2);
    }
    if(y >= b - 1 && r >= b + 1) {
        maximum = max(maximum, b - 1 + b + b + 1);
    }
    if(y >= r - 2 && b >= r - 1) {
        maximum = max(maximum, r - 2 + r - 1 + r);
    }
    cout << maximum;
    return 0;
}