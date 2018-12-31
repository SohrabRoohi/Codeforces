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
    
    int64 n;
    cin >> n;
    vector<vector<int64>> graph(n+1);
    for(int64 i = 1; i <= n; i++) {
        int64 a1, a2;
        cin >> a1 >> a2;
        graph[i].push_back(a1);
        graph[i].push_back(a2);
    }
    if(n == 3) {
        cout << "1 2 3";
        return 0;
    }
    vector<int64> ans;
    ans.push_back(1);
    int64 cur = 1;
    while(ans.size() < n) {
        int64 left = graph[cur][0];
        int64 right = graph[cur][1];

        int64 leftleft = graph[left][0];
        int64 leftright = graph[left][1];

        int64 rightleft = graph[right][0];
        int64 rightright = graph[right][1];

        if(leftleft == right || leftright == right) {
            ans.push_back(left);
            cur = left;
        }
        else if(rightleft == left || rightright == left) {
            ans.push_back(right);
            cur = right;
        }
    }
    for(int64 i : ans) {
        cout << i << " ";
    }
    return 0;
}