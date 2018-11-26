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
    int maxV = -INT_MAX;
    int maxIndex = -1;
    int minV = INT_MAX;
    int minIndex = -1;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        if(v > maxV) {
            maxV = v;
            maxIndex = i;
        }
        if(v < minV) {
           minV = v;
           minIndex = i;
        }
    }
    int dist = maxIndex - minIndex;
    if(dist == n - 1) {
        cout << dist;
    }
    else {
        cout << max(max(abs(0-maxIndex), abs(0-minIndex)), max(abs(n-1 - minIndex), abs(n - 1 - maxIndex)));
    }
    return 0;
}