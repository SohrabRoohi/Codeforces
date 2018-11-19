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

    string s;
    cin >> s;

    int length = s.length();
    int optimalRows = -1;
    for(int i = 1; i <= 5; i++) {
        if((double)length / i <= 20) {
            optimalRows = i;
            break;
        }
    }
    int cutOff = length / optimalRows;
    int numberIncreased = length % optimalRows;
    int start = 0;
    vector<string> rows;
    int index = 0;
    for(int i = 0; i < numberIncreased; i++) {
        string toAdd = "";
        for(int j = 0; j < cutOff + 1; j++) {
            toAdd += s[index];
            index++;
        }
        rows.push_back(toAdd);
    }
    if(numberIncreased != 0) {
        for (int i = 0; i < optimalRows - numberIncreased; i++) {
            string toAdd = "";
            for (int j = 0; j < cutOff; j++) {
                toAdd += s[index];
                index++;
            }
            rows.push_back(toAdd + "*");
        }
    }
    else {
        for (int i = 0; i < optimalRows - numberIncreased; i++) {
            string toAdd = "";
            for (int j = 0; j < cutOff; j++) {
                toAdd += s[index];
                index++;
            }
            rows.push_back(toAdd);
        }
    }

    cout << optimalRows << " " << rows[0].length() << endl;
    for(int i = 0; i < rows.size(); i++) {
        cout << rows[i] << endl;
    }

    return 0;
}