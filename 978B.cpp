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
    int deleted = 0;
    for(int i = 2; i < s.length(); i++) {
        char p1 = s[i-2];
        char p2 = s[i-1];
        if(p1 == 'x' && p2 == 'x') {
            bool done = false;
            while(i < s.length() && !done) {
                done = true;
                if(s[i] == 'x') {
                    s.erase(s.begin() + i);
                    deleted++;
                    done = false;
                }
            }
        }
    }
    cout << deleted;
    return 0;
}