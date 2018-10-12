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
    
    int64 m, n;
    cin >> n >> m;

    int64 minOnGroup = n / m;
    int64 leftOver = n % m;
    int64 numMinGroups = m - leftOver;
    int64 min = (((minOnGroup) * (minOnGroup + 1)) / 2) * leftOver + (((minOnGroup - 1) * (minOnGroup)) / 2) * numMinGroups;


    int64 maxOnTeam = n - m + 1;
    int64 max = ((maxOnTeam) * (maxOnTeam - 1)) / 2;
    cout << min << " " << max;
    return 0;
}