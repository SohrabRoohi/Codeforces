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
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j <= n; j++) {
            string substr = s.substr(i,j-i);
            int goal = substr.size() / 2;
            unordered_map<char,int> m;
            for(char c : substr) {
                m[c]++;
                if(m[c] > goal) {
                    goto skip;
                }
            }
            cout << "YES" << endl;
            cout << substr;
            return 0;
            skip:
            continue;
        }
    }
    cout << "NO";
    return 0;
}