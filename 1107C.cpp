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
    
    int n, k;
    cin >> n >> k;
    vector<int64> a;
    for(int i = 0; i < n; i++) {
        int64 v;
        cin >> v;
        a.push_back(v);
    }
    string s;
    cin >> s;
    int64 sum = 0;
    priority_queue<int64> p;
    p.push(a[0]);
    for(int i = 1; i < s.length(); i++) {
        if(s[i] != s[i-1]) {
            for(int j = 0; j < k && !p.empty(); j++) {
                sum += p.top();
                p.pop();
            }
            while(!p.empty()) {
                p.pop();
            }
            p.push(a[i]);
        }
        else {
            p.push(a[i]);
        }
    }
    for(int j = 0; j < k && !p.empty(); j++) {
        sum += p.top();
        p.pop();
    }
    cout << sum;
    return 0;
}