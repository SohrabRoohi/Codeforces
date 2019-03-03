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
bool first(int x, int y, int n, int d) {
    int val =(x - 0) + d;
    return y <= val;
}

bool second(int x, int y, int n, int d) {
    int val = (x - d);
    return y >= val;
}

bool third(int x, int y, int n, int d) {
    int val = -1 * (x-d);
    return y >= val;
}

bool fourth(int x, int y, int n, int d) {
    int val = -1 * (x-n) + (n-d);
    return y <= val;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, d;
    cin >> n >> d;
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        if(first(x, y, n, d) && second(x, y, n, d) && third(x, y, n, d) && fourth(x, y, n, d)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}