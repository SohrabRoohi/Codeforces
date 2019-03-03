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
    string s;
    cin >> s;
    vector<int64> a;
    for(int i = 0; i < n; i++) {
        int64 v;
        cin >> v;
        a.push_back(v);
    }
    if(s.find("RL") == string::npos) {
        cout << -1;
        return 0;
    }
    vector<int64> positions;
    size_t index = s.find("RL", 0);
    while(index != string::npos) {
        positions.push_back(index);
        index = s.find("RL", index + 1);
    }
    int64 minAns = INT_MAX;
    for(int64 i : positions) {
          minAns = min(minAns, (a[i+1] - a[i]) / 2);
    }
    cout << minAns;
    return 0;
}