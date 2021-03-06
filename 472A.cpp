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
    if(n % 2 == 0) {
        int half = n / 2;
        if(half % 2 == 0) {
            cout << half - 2 << " " << half + 2;
        }
        else {
            for(int i = 4; i < n;  i++) {
                int other = n - i;
                for(int j = 2; j < other; j++) {
                    if(other % j == 0) {
                        cout << i << " " << other;
                        return 0;
                    }
                }
            }
        }
    }
    else {
        for(int i = 4; i < n;  i += 2) {
            int other = n - i;
            for(int j = 2; j < other; j++) {
                if(other % j == 0) {
                    cout << i << " " << other;
                    return 0;
                }
            }
        }
    }
    return 0;
}