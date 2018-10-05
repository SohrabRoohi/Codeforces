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
    VI ranges;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        sum += v;
        ranges.push_back(sum);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int q;
        cin >> q;

        int low = 0;
        int high = ranges.size();
        int middle = (low + high) / 2;
        while(true) {
            int value = ranges[middle];
            if(q - value <= 0) {
                if(middle == 0) {
                    break;
                }
                else {
                    if(q - ranges[middle - 1] > 0) {
                        break;
                    }
                    else {
                        high = middle - 1;
                        middle = (low + high) / 2;
                        continue;
                    }
                }
            }
            else {
                low = middle + 1;
                middle = (low + high) / 2;
            }
        }


        cout << middle + 1 << endl;
    }
    return 0;
}