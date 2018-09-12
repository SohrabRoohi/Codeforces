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

    int64 n, x, y;
    cin >> n >> x >> y;
    string a;
    cin >> a;
    bool allOne = true;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != '1') {
            allOne = false;
        }
    }
    if(allOne) {
        cout << 0;
        return 0;
    }

    //Flip All 0's
    int64 zeroFragments = 0;
    bool fragmentFound = false;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == '0' && !fragmentFound) {
            zeroFragments++;
            fragmentFound = true;
        }
        else if(a[i] == '1') {
            fragmentFound = false;
        }
    }
    int64 costOnlyFlip = zeroFragments * y;

    bool potential = false;
    bool oneFound = false;
    int flips = 0;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == '0' && !potential) {
            potential = true;
        }
        else if(a[i] == '1' && potential) {
            oneFound = true;
        }
        else if(a[i] == '0' && potential && oneFound) {
            flips++;
            oneFound = false;
        }
    }
    int64 costWithReverse = flips * x + y;
    cout << min(costOnlyFlip, costWithReverse);

    return 0;
}