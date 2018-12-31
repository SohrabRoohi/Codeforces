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
    
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int64 n, x, y, d;
        cin >> n >> x >> y >> d;
        int64 lowest = 1;
        int64 highest = n;
        int64 curDist = abs(x-y);
        int64 lowestDist = abs(lowest-y);
        int64 highestDist = abs(highest-y);
        int64 lowStep = (int64)ceil((abs((double)x - lowest)) / d );
        int64 highStep = (int64)ceil((abs((double)x - highest)) / d);
        if(curDist % d == 0) {
            cout << curDist / d;
        }
        else if(lowestDist % d == 0 && highestDist % d == 0) {
            cout << min(lowStep + lowestDist / d, highStep + highestDist / d);
        }
        else if(lowestDist % d == 0) {
            cout << lowStep + (lowestDist / d);
        }
        else if(highestDist % d == 0) {
            cout << highStep + (highestDist / d);
        }
        else {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}