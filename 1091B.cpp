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

/*
    ifstream in("C:\\Users\\Sohrab\\CLionProjects\\CodeforcesGIT\\input.txt");
    cin.rdbuf(in.rdbuf());
    ofstream out("C:\\Users\\Sohrab\\CLionProjects\\CodeforcesGIT\\output.txt");
    cout.rdbuf(out.rdbuf());
     */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<pair<int,int>> obelisk, clue;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        obelisk.push_back(make_pair(x,y));
    }
    for(int q = 0; q < n; q++) {
        int i, j;
        cin >> i >> j;
        clue.push_back(make_pair(i,j));
    }
    map<pair<int,int>,int> count;
    for(int i = 0; i < obelisk.size(); i++) {
        for(int j = 0; j < clue.size(); j++) {
            pair<int,int> toAdd = make_pair(get<0>(obelisk[i]) + get<0>(clue[j]), get<1>(obelisk[i]) + get<1>(clue[j]));
            count[toAdd]++;
        }
    }
    for(pair<pair<int,int> , int> p : count) {
        if(p.second == n) {
            cout << p.first.first << " " << p.first.second;
            return 0;
        }
    }
    return 0;
}