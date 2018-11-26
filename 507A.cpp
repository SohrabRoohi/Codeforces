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
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> p;
    for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        p.push(make_pair(a,i));
    }
    int count = 0;
    vector<int> indexes;
    while(p.top().first <= k && !p.empty()) {
        count++;
        indexes.push_back(p.top().second);
        k -= p.top().first;
        p.pop();
    }
    cout << count << endl;
    for(int i : indexes) {
        cout << i << " ";
    }

    return 0;
}