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
bool test(int64 n, int64 k) {
    int64 original = n;
    int64 taken = 0;
    while(n > 0) {
        int64 sub = min(n,k);
        n -= sub;
        taken += sub;
        n -= (n / 10);
    }
    return (double)taken >= ((double)original / 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int64 n;
    cin >> n;
    int64 l = 1;
    int64 r = n;
    int64 k = LLONG_MAX;
    while(l <= r) {
        int64 m = (l + r) / 2;
        if(test(n,m)) {
            k = min(k, m);
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    cout << k;
    return 0;
}