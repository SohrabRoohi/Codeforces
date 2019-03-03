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
    
    int64 n, m, k;
    cin >> n >> m >> k;
    k--;
    vector<int64> a;
    priority_queue<int64, vector<int64>, greater<int64>> minP;
    priority_queue<int64> maxP;
    for(int i = 0; i < n; i++) {
        int64 v;
        cin >> v;
        a.push_back(v);
    }
    vector<int64> ans;
    int64 sum = 0;
    int64 count = 0;
    for(int i = 0; i < n; i++) {
        if(count >= m && count != 0) {
            priority_queue<int64> test = maxP;
            for(int j = 0; j < m - 1; j++) {
                test.pop();
            }
            if(a[i] <= test.top() || ((abs(n-i) / m) <= k && k != 0)) {
                count = 0;
                for(int j = 0; j < m; j++) {
                    sum += maxP.top();
                    maxP.pop();
                }
                while(!maxP.empty()) {
                    maxP.pop();
                }
                while(!minP.empty()) {
                    minP.pop();
                }
                ans.push_back(i);
            }
            k--;
        }
        minP.push(a[i]);
        maxP.push(a[i]);
        count++;
    }
    for(int j = 0; j < m; j++) {
        sum += maxP.top();
        maxP.pop();
    }
    cout << sum << endl;
    for(int64 i : ans) {
        cout << i << " ";
    }
    return 0;
}