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
 * cin
 */

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n-r));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    cout.precision(9);

    string s1, s2;
    cin >> s1 >> s2;
    int actual = 0;
    int predicted = 0;
    int unknown = 0;
    for(int i = 0; i < s1.length(); i++) {
        if(s1[i] == '+') {
            actual++;
        }
        else {
            actual--;
        }
        if(s2[i] == '+') {
            predicted++;
        }
        else if(s2[i] == '-') {
            predicted--;
        }
        else {
            unknown++;
        }
    }
    int needed = abs(actual - predicted);
    double prob = 0;
    if(abs(needed) > unknown || (needed % 2 != unknown % 2)) {
        cout << prob;
        return 0;
    }
    if(needed == 0) {
        needed = unknown / 2;
    }
    double possibilities = pow(2, unknown);
    cout << (double)nCr(unknown, needed) / possibilities;
    return 0;
}