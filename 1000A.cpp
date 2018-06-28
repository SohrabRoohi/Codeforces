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
    VS ai;
    VS bi;
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;
        ai.push_back(a);
    }
    for(int i = 0; i < n; i++) {
        string b;
        cin >> b;
        bi.push_back(b);
    }
    int number = 0;
    for(int i = 0; i < n; i++) {
        string current = ai[i];
        for(int j = 0; j < bi.size(); j++) {
            if(current == bi[j]) {
                bi.erase(bi.begin() + j);
                goto next;
            }
        }
        number++;

        next:
        continue;
    }
    cout << number;
    return 0;
}