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

    int64 n;
    cin >> n;
    vector<pair<int64,bool>> values;
    for(int i = 0; i < n; i++) {
        int64 l1;
        int64 r1;
        cin >> l1 >> r1;
        values.push_back(make_pair(l1,false));
        values.push_back(make_pair(r1,true));
    }
    sort(values.begin(), values.end());
    int64 counts[n+1] = {};
    int64 count = 0;
    for(int i = 0; i < 2 * n; i++) {
        if(i > 0) {
            int64 distance = values[i].first - values[i-1].first;
            if(values[i].second && !values[i-1].second) {
                distance = distance + 1;
            }
            counts[count] += distance;
        }
        if(!values[i].second) {
            count++;
        }
        else {
            count--;
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << counts[i] << " ";
    }
    return 0;
}