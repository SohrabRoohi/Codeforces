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
    
    int n , k;
    cin >> n >> k;
    VI a;
    for(int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a.push_back(ai);
    }
    int toAdd = 0;
    for(int i = 1; i < a.size(); i++) {
        int v = k - a[i] - a[i-1];
        if(v <= 0) {
            continue;
        }
        toAdd += v;
        a[i] += v;
    }
    cout << toAdd << endl;
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}