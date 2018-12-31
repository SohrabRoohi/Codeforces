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
    VI ans;
    int64 sum = 0;
    vector<pair<int,int>> a;
    for(int i = 1; i <= n; i++) {
        int v;
        cin >> v;
        a.push_back(make_pair(v,i));
        sum += v;
    }
    sort(a.begin(), a.end());
    int64 goal = a[a.size()- 1].first;
    sum -= goal;
    for(int i = 0; i < a.size() - 1; i++) {
        if(sum - a[i].first == goal) {
            ans.push_back(a[i].second);
        }
    }
    int lastIndex = a[a.size()-1].second;
    int secondLast = a[a.size()-2].first;
    sum -= secondLast;
    if(sum == secondLast) {
        ans.push_back(lastIndex);
    }
    cout << ans.size() << endl;
    for(int i : ans) {
        cout << i << " ";
    }
    return 0;
}