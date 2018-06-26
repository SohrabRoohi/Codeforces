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

bool myComparison(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int64 s, n;
    cin >> s >> n;
    vector<PII> dragons;
    for(int i = 0; i < n; i++) {
        int dragonStrength;
        int bonus;
        cin >> dragonStrength >> bonus;
        dragons.push_back(PII(dragonStrength, bonus));
    }
    sort(dragons.begin(), dragons.end(), myComparison);
    for(int i = 0; i < n; i++) {
        int dragonStrength = dragons[i].first;
        int bonus = dragons[i].second;
        if(s > dragonStrength) {
            s += bonus;
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}