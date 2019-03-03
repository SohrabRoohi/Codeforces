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
int64 findLargestDivisor(int64 n, int64 sum, int64 &ans, vector<int64> &v, int64 cur) {
    for(int64 i = (int64)sqrt(n); i >= 2; i--) {
        if(n % i == 0) {
            int64 temp = sum;
            temp -= v[0];
            temp -= v[cur];
            temp += v[0] * i;
            temp += v[cur] / i;
            ans = min(ans,temp);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int64> v;
    int64 sum = 0;
    for(int i = 0; i < n; i++) {
        int64 ai;
        cin >> ai;
        v.push_back(ai);
        sum += ai;
    }
    int64 ans = sum;
    sort(v.begin(), v.end());
    int64 index = -1;
    int64 divisor = -1;
    for(int i = 1; i < v.size(); i++) {
        findLargestDivisor(v[i], sum, ans, v, i);
    }
    cout << ans;
    return 0;
}