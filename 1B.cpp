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
 * cin
 */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        bool numFound = false;
        bool type = false;
        for(int j = 0; j < s.length(); j++) {
            if(isdigit(s[j])) {
                numFound = true;
            }
            else if(isalpha(s[j]) && numFound) {
                type = true;
            }
        }

        if(type) {
            string cNum = "";
            string rNum = "";
            bool found = false;
            for(int j = 1; j < s.length(); j++) {
                if(isalpha(s[j])) {
                    found = true;
                    continue;
                }
                if(!found) {
                    rNum += s[j];
                }
                else {
                    cNum += s[j];
                }
            }
            int col = stoi(cNum);
            vector<int> vals;
            int offset = 1;
            while(col != 0) {
                int mod = col % 26;
                int val = mod - offset;
                if(mod == 0) {
                    val = 26 - offset;
                    offset = 2;
                }
                else {
                    offset = 1;
                }
                if(val != -1) {
                    vals.push_back(val);
                }
                col /= 26;
            }
            string answer = "";
            for(int j = vals.size() - 1; j >= 0; j--) {
                string cur = "";
                answer += ('A' + vals[j]);
            }
            answer += rNum;
            cout << answer << endl;
        }
        else {
            string col = "";
            string row = "";
            for(int j = 0; j < s.length(); j++) {
                if(isalpha(s[j])) {
                    col += s[j];
                }
                else {
                    row += s[j];
                }
            }
            int sum = 0;
            int p = 0;
            for(int j = col.length() - 1; j >= 0; j--) {
                sum += (pow(26, p) * ((int)(col[j] - 'A' + 1)));
                p++;
            }
            cout << "R" << row << "C" << sum << endl;
        }
    }
    return 0;
}