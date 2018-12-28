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
    
    unordered_map<string,string> m;
    m["purple"] = "Power";
    m["green"] = "Time";
    m["blue"] = "Space";
    m["orange"] = "Soul";
    m["red"] = "Reality";
    m["yellow"] = "Mind";
    int n;
    cin >> n;
    unordered_set<string> s;
    for(int i = 0; i < n; i++) {
        string cur;
        cin >> cur;
        s.insert(cur);
    }
    cout << 6 - s.size() << endl;
    for(pair<string,string> p : m) {
        if(!s.count(p.first)) {
            cout << p.second << endl;
        }
    }
    return 0;
}