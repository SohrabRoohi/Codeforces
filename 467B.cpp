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

int countOnes(string s) {
    int ones = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') {
            ones++;
        }
    }
    return ones;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, k;
    cin >> n >> m >> k;

    VI values;
    for(int i = 0; i < m; i++) {
        int v;
        cin >> v;
        values.push_back(v);
    }
    int fedor;
    cin >> fedor;
    int friends = 0;
    for(int i = 0; i < values.size(); i++) {
        int result = fedor ^ values[i];
        string resultString = bitset<64>(result).to_string();
        int ones = countOnes(resultString);
        if(ones <= k) {
            friends++;
        }
    }
    cout << friends;
    return 0;
}