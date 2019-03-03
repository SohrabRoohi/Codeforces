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
    int maxLength = 0;
    int num = 0;
    int curLength = 0;
    bool in = false;
    for(int i = 0; i < n; i++) {
        if(s[i] == '_') {
            if(curLength > 0) {
                if(in) {
                    num++;
                }
                else {
                    maxLength = max(maxLength, curLength);
                }
            }
            curLength = 0;
        }
        else if(s[i] == '(') {
            maxLength = max(maxLength, curLength);
            curLength = 0;
            in = true;
        }
        else if(s[i] == ')') {
            if(curLength > 0) {
                num++;
            }
            curLength = 0;
            in = false;
        }
        else {
            curLength++;
        }
    }
    maxLength = max(maxLength, curLength);
    cout << maxLength << " " << num;
    return 0;
}