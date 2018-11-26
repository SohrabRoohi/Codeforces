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
    
    int a, n;
    cin >> a >> n;
    int l = n-1;
    int r = n-1;
    vector<int> t;
    for(int i = 0; i < a; i++) {
        int v;
        cin >> v;
        t.push_back(v);
    }
    int number = 0;
    while(l >= 0 || r < a) {
        if(l == r) {
            if(t[l] == 1) {
                number++;
            }
        }
        else if(l < 0) {
            if(t[r] == 1) {
                number++;
            }
        }
        else if(r >= a) {
            if(t[l] == 1) {
                number++;
            }
        }
        else {
            if(t[l] == 1 && t[r] == 1) {
                number += 2;
            }
        }
        l--;
        r++;
    }
    cout << number;
    return 0;
}