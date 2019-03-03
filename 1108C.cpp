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
    string ans = "";
    vector<string> comb{"RGB", "RBG", "BRG", "BGR", "GRB", "GBR"};
    int minCost = INT_MAX;
    for(string base : comb) {
        int cost = 0;
        string curAns = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != base[i % 3]) {
                cost++;
            }
            curAns += base[i % 3];
        }
        if(cost < minCost) {
            minCost = cost;
            ans = curAns;
        }
    }
    cout << minCost << endl << ans;
    return 0;
}