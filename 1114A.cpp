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
    
    int x, y, z;
    cin >> x >> y >> z;
    int a, b, c;
    cin >> a >> b >> c;
    if(x <= a) {
        a -= x;
    }
    else {
        cout << "NO";
        return 0;
    }
    if(y <= (a + b)) {
        int val = min(y,a);
        a -= val;
        y -= val;
        val = min(y, b);
        b -= val;
        y -= val;
    }
    else {
        cout << "NO";
        return 0;
    }
    if(z <= (a + b + c)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}