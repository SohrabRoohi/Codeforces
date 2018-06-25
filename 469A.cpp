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

    int n;
    cin >> n;
    bool levels[n+1] = {};
    int p;
    cin >> p;
    for(int i = 0; i < p; i++) {
        int level;
        cin >> level;
        levels[level] = true;
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int level;
        cin >> level;
        levels[level] = true;
    }
    for(int i = 1; i <= n; i++) {
        if(!levels[i]) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}