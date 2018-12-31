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
    
    unordered_map<int,int> m;
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        int t;
        cin >> t;
        m[t]++;
        sum += t;
    }
    int maxRemoval = 0;
    for(pair<int,int> p : m) {
        if(p.second >= 3) {
            if(p.first * 3 > maxRemoval) {
                maxRemoval = p.first * 3;
            }
        }
        else if(p.second >= 2) {
            if(p.first * 2 > maxRemoval) {
                maxRemoval = p.first * 2;
            }
        }
    }
    cout << sum - maxRemoval;
    return 0;
}