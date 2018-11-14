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

    int64 n;
    cin >> n;
    int64 start = n;
    int subtractions = 0;
    bool prime = true;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            prime = false;
            break;
        }
    }
    if(prime) {
        cout << 1;
        return 0;
    }
    if(n % 2 == 0) {
        cout << n / 2;
        return 0;
    }
    else {
        for(int i = 3; i <= sqrt(n); i++) {
            if(n % i == 0) {
                n -= i;
                cout << n / 2 + 1;
                return 0;
            }
        }
    }
    return 0;
}