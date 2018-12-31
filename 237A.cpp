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
    int prevH, prevM;
    int count;
    int maxCount = -1;
    for(int i = 0; i < n; i++) {
        int curH, curM;
        cin >> curH >> curM;
        if(i == 0) {
            prevH = curH;
            prevM = curM;
            count = 1;
            maxCount = max(maxCount, count);
            continue;
        }
        if(prevH == curH && prevM == curM) {
            count++;
        }
        else {
            count = 1;
        }
        prevH = curH;
        prevM = curM;
        maxCount = max(maxCount, count);
    }
    cout << maxCount;
    return 0;
}