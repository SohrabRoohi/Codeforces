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

    vector<int> d;
    d.push_back(0);
    int first;
    cin >> first;
    d.push_back(first);
    for(int i = 2; i <= n - 1; i++) {
        int v;
        cin >> v;
        d.push_back(v + d[i-1]);
    }
    int a, b;
    cin >> a >> b;
    cout << d[b-1] - d[a-1];
    return 0;
}