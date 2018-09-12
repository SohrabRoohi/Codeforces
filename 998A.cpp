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

//If you are looking at my solution this is just a shortcut method and is not always used
vector<string> split(string input, char c) {
    stringstream test(input);
    string segment;
    vector<string> list;
    while(getline(test, segment, c))
    {
        list.push_back(segment);
    }
    return list;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;

    int n;
    cin >> n;
    if(n == 1) {
        cout << -1;
        return 0;
    }
    vector<pair<int,int>> a;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        int ai;
        cin >> ai;
        pair<int,int> aii = make_pair(ai,i);
        a.push_back(aii);
        sum += ai;
    }
    sort(a.begin(), a.end());
    int g = 0;
    vector<pair<int,int>> indexes;
    for(int i = 0; i < a.size(); i++) {
        sum -= a[i].first;
        g += a[i].first;
        indexes.push_back(a[i]);
        if(sum <= 0) {
            cout << -1;
            return 0;
        }
        if(sum != g) {
            break;
        }
    }
    cout << indexes.size() << endl;
    for(int i = 0; i < indexes.size(); i++) {
        cout << indexes[i].second << " ";
    }
    return 0;
}