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
    int64 mod = (int64)(1e9 + 7);
    int64 x, y, n;
    cin >> x >> y >> n;
    int64 xCopy, yCopy;
    xCopy = x;
    yCopy = y;
    vector<int64> group;
    group.push_back(((x % mod) + mod) % mod);
    group.push_back(((y % mod) + mod) % mod);
    do {
        int64 temp = xCopy;
        xCopy = yCopy;
        yCopy = yCopy - temp;
        group.push_back(((yCopy % mod) + mod) % mod);
    }
    while(xCopy != x || yCopy != y);
    cout << group[(n - 1) % (group.size() - 2)];
    return 0;
}