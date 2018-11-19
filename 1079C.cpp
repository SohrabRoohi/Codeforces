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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;

    int n;
    cin >> n;
    VI a;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        a.push_back(v);
    }

    stack<tuple<int,int>> s;
    s.push(make_tuple(5, 1));
    s.push(make_tuple(4, 1));
    s.push(make_tuple(3, 1));
    s.push(make_tuple(2, 1));
    s.push(make_tuple(1, 1));

    vector<int> values(2 * 100000);
    while(!s.empty()) {
        tuple<int,int> t = s.top();

        int prev = get<0>(t);
        int index = get<1>(t);
        values[index-1] = prev;
        s.pop();

        if(index == a.size()) {
            for(int i = 0; i < values.size() && values[i] != 0; i++) {
                cout << values[i] << " ";
            }
            return 0;
        }

        if(a[index - 1] < a[index]) {
            for(int i = prev + 1; i <= 5; i++) {
                s.push(make_tuple(i, index + 1));
            }
        }
        else if(a[index - 1] > a[index]) {
            for(int i = 1; i < prev; i++) {
                s.push(make_tuple(i, index + 1));
            }
        }
        else {
            for(int i = 1; i <= 5; i++) {
                if(i == prev) {
                    continue;
                }
                s.push(make_tuple(i, index + 1));
            }
        }
    }

    cout << -1;


    return 0;
}