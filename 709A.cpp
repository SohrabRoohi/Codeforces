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
    
    int n, b, d;
    cin >> n >> b >> d;
    queue<int> q;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        q.push(v);
    }
    int64 size = 0;
    int64 empty = 0;
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        if(cur <= b) {
            size += cur;
        }
        if(size > d) {
            empty++;
            size = 0;
        }
    }
    cout << empty;
    return 0;
}