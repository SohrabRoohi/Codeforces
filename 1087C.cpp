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
    
    int xA, yA, xB, yB, xC, yC;
    cin >> xA >> yA >> xB >> yB >> xC >> yC;
    int xAB = xB - xA;
    int yAB = yB - yA;
    int xBC = xC - xB;
    int yBC = yC - yB;
    int dist = abs(xAB) + abs(yAB) + abs(xBC) + abs(yBC) + 1;
    if(signbit(xAB) != signbit(xBC)) {
        dist -= min(abs(xAB), abs(xBC));
    }
    if(signbit(yAB) != signbit(yBC)) {
        dist -= min(abs(yAB), abs(yBC));
    }
    cout << dist << endl;
    return 0;
}