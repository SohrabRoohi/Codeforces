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
bool getRange(int64 l, int64 r, vector<int64> &prefix) {
    int64 mid = (l + r - 1) / 2;
    int64 ll = l;
    int64 lr = mid + 1;
    int64 rl = mid + 1;
    int64 rr = r + 1;
    int64 left = prefix[lr] ^ prefix[ll];
    int64 right = prefix[rr] ^ prefix[rl];
    return left == right;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int64> prefix;
    vector<int64> a;
    prefix.push_back(0);
    int64 v;
    cin >> v;
    a.push_back(v);
    prefix.push_back(v);
    for(int i = 2; i <= n; i++) {
        int64 v1;
        cin >> v1;
        int64 add = prefix[i-1] ^ v1;
        prefix.push_back(prefix[i-1] ^ v1);
        a.push_back(v1);
    }
    int64 ans = 0;
    for(int i = 0; i < a.size() - 1; i++) {
        for(int j = i + 1; j < a.size(); j += 2) {
            if((j - i + 1) % 2 == 0) {
                ans += getRange(i, j, prefix);
            }
        }
    }
    cout << ans;
    return 0;
}