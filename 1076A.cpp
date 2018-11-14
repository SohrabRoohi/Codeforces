/*
  Sohrab Roohi
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;

    int n;
    string s;
    cin >> n >> s;
    string result = "";
    char last;
    bool mark = false;
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            last = s[i];
            continue;
        }
        if(s[i] < last && !mark) {
            s[i-1] = '1';
            mark = true;
        }
        last = s[i];
    }
    for(int i = 0; i < n - 1; i++) {
        if(s[i] != '1') {
            result += s[i];
        }
    }
    if(mark) {
        result += s[s.length() - 1];
    }
    cout << result;
    return 0;
}