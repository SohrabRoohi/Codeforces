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

    string s;
    cin >> s;
    int upper = 0;
    for(int i = 0; i < s.length(); i++) {
        if(isupper(s[i])) {
            upper++;
        }
    }
    int lower = s.length() - upper;
    if(upper > lower) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
    return 0;
}