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
    vector<int64> a;
    int64 n, s;
    cin >> n >> s;
    for(int i = 0 ; i < n ; i++) {
        int64 v;
        cin >> v;
        a.push_back(v);
    }
    int64 minV = *min_element(a.begin(), a.end());
    int64 sum = 0;
    int64 total = 0;
    for(int64 i : a) {
        if(i != minV) {
            sum += abs(i-minV);
        }
        total += i;
    }
    if(total < s) {
        cout << - 1;
        return 0;
    }
    if(sum >= s) {
        cout << minV;
    }
    else {
        int64 result = (int64)ceil((double)(s - sum) / n);
        cout << minV - result;
    }
    return 0;
}