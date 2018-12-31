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
    vector<tuple<int,int,int>> answer;
    answer.push_back(make_tuple(1,(int)a.size(), 100000));
    for(int i = 0; i < a.size(); i++) {
        a[i] += 100000;
    }
    for(int i = 0; i < a.size(); i++) {
        int goal = i + 1;
        answer.push_back(make_tuple(2, goal, a[i] - (i+1)));
        a[i] %= (a[i] - (i+1));
    }
    cout << answer.size() << endl;
    for(tuple<int,int,int> t : answer) {
        cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
    }

    return 0;
}