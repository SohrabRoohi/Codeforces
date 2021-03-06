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
    int64 l;
    cin >> n >> l;
    vector<int64> values;
    for(int i = 0; i < n; i++){
        int64 value;
        cin >> value;
        values.push_back(value);
    }
    sort(values.begin(), values.end());
    int64 front = 0;
    int64 end = l;
    int64 maxDistance = 0;
    for(int i = 0; i < n - 1; i++) {
        if(values[i+1] - values[i] > maxDistance) {
            maxDistance = values[i+1] - values[i];
        }
    }
    int64 frontDistance = values[0];
    int64 endDistance = l - values[n-1];
    double ans = max(frontDistance, endDistance);
    ans = max((double)maxDistance / 2, ans);
    cout << ans;
    return 0;
}