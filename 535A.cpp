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

    int s;
    cin >> s;
    if(s == 0) {
        cout << "zero";
        return 0;
    }
    string first[] = {"one" , "two" , "three", "four", "five", "six", "seven", "eight", "nine"};
    string second[] = {"ten", "eleven", "twelve", "thirteen", "fourteen" ,"fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string third[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    if(s < 10) {
        cout << first[s-1];
    }
    else if(s < 20) {
        cout << second[s-10];
    }
    else if(s >= 20) {
        string ans = "";
        int sd = s % 10;
        s /= 10;
        int fd = s % 10;
        ans += third[fd-2];
        if(sd != 0) {
            ans += "-";
            ans += first[sd-1];
        }
        cout << ans;
    }
    return 0;
}