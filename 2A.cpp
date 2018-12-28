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
    unordered_map<string, int> m;
    int score = -INT_MAX;
    vector<pair<string,int>> v;
    for(int i = 0; i < n; i++) {
        string name;
        int cur;
        cin >> name >> cur;
        m[name] += cur;
        v.push_back(make_pair(name,cur));
    }
    int maxV = -INT_MAX;
    for(pair<string,int> p : m) {
        maxV = max(maxV, p.second);
    }
    unordered_set<string> s;
    for(pair<string,int> p : m) {
        if(p.second == maxV) {
            s.insert(p.first);
        }
    }
    m.clear();
    for(pair<string,int> p : v) {
        m[p.first] += p.second;
        if(m[p.first] >= maxV && s.count(p.first)) {
            cout << p.first;
            return 0;
        }
    }
    return 0;
}