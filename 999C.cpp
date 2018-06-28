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
    vector<vector<int>> alphaIndexes;
    int n;
    int k;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i = 0; i < 26; i++) {
        VI letters;
        alphaIndexes.push_back(letters);
    }
    for(int i = 0; i < n; i++) {
        char current = s[i];
        alphaIndexes[current - 'a'].push_back(i);
    }
    for(int i = 0; i < alphaIndexes.size() && k > 0; i++) {
        for(int j = 0; j < alphaIndexes[i].size() && k > 0; j++) {
            s[alphaIndexes[i][j]] = '1';
            k--;
        }
    }
    string outString = "";
    for(int i = 0; i < n; i++) {
        if(s[i] != '1') {
            outString += s[i];
        }
    }
    cout << outString;

    return 0;
}