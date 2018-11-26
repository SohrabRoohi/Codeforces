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
    unordered_map<int,int> m;
    vector<int> index;
    for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if(!m.count(a)) {
            index.push_back(i);
        }
        m[a]++;
    }
    if(index.size() >= k) {
        cout << "YES" << endl;
        for(int i = 0; i < k; i++) {
            cout << index[i] << " ";
        }
    }
    else {
        cout << "NO";
    }
    return 0;
}