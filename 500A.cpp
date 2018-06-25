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

    int n, t;
    cin >> n >> t;
    VI values;
    for(int i = 0; i < n - 1; i++) {
        int a;
        cin >> a;
        values.push_back(a);
    }
    int last;
    for(int i = 0; i < n - 1; ) {
        int current = i + 1;
        if(current == t) {
            cout << "YES";
            return 0;
        }
        i += values[i];
        last = i;
    }
    if(last + 1 == t) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}