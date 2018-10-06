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
    int64 min = 10000000001;
    int64 max = 0;
    int64 minCount = 1;
    int64 maxCount = 1;
    for(int i = 0; i < n; i++) {
        int64 b;
        cin >> b;
        if(b == min) {
            minCount++;
        }
        if(b == max) {
            maxCount++;
        }
        if(b > max) {
            max = b;
            maxCount = 1;
        }
        if(b < min) {
            min = b;
            minCount = 1;
        }
    }
    int64 diff = max - min;
    int64 ways;
    if(diff == 0) {
        ways = (minCount * (minCount - 1)) / 2;
    }
    else {
        ways = minCount * maxCount;
    }
    cout << diff << " " << ways;
    return 0;
}