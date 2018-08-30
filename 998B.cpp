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

int cuts(VI a) {
    VI indexes;
    if(a.size() <= 3) {
        return 0;
    }
    for(int i = 0; i < a.size(); i++) {
        int evenL = 0;
        int oddL = 0;
        int evenR = 0;
        int oddR = 0;
        for(int j = 0; j <= i; j++) {
            if(a[j] % 2 == 0) {
                evenL++;
            }
            else {
                oddL++;
            }
        }
        for(int j = i + 1; j < a.size(); j++) {
            if(a[j] % 2 == 0) {
                evenR++;
            }
            else {
                oddR++;
            }
        }
        if(evenL == oddL && evenR == oddR) {
            indexes.push_back(i);
        }
    }
    if(indexes.size() == 0) {
        return 0;
    }
    else {
        vector<vector<int>> subarrays;
        for(int i = 0; i < indexes.size(); i++) {
            VI sub;
            if(i == 0) {
                for(int j = 0; j <= indexes[i]; j++) {
                    sub.push_back(a[j]);
                }
            }
            else {
                for(int j = indexes[i-1] + 1; j <= indexes[i]; j++) {
                    sub.push_back(a[j]);
                }
            }
            subarrays.push_back(sub);
        }
        int m = 0;
        for(int i = 0; i < subarrays.size(); i++) {
            m = max(cuts(subarrays[i]),m);
        }
        return m + 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;

    int n;
    cin >> n;
    if(n % 2 == 1) {
        cout << 0;
        return 0;
    }
    int B;
    cin >> B;
    VI a;
    for(int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a.push_back(ai);
    }
    cout << cuts(a);

    return 0;
}