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
    vector<int> a;
    vector<string> c;
    unordered_map<int64,int64> m;
    vector<bool> used(n, false);
    int64 ans = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int64 sum = 0;
        for(int j = 0; j < s.length(); j++) {
            if(s[j] == '(') {
                sum++;
            }
            else {
                sum--;
            }
        }
        if(sum >= 0) {
            bool negative = false;
            int64 sum1 = 0;
            for(int j = 0; j < s.length(); j++) {
                if(s[j] == '(') {
                    sum1++;
                }
                else {
                    sum1--;
                }
                if(sum1 < 0) {
                    negative = true;
                }
            }
            if(!negative) {
                m[sum]++;
            }
        }
        else if(sum < 0) {
            bool positive = false;
            int64 sum1 = 0;
            for(int j = s.length() - 1; j >= 0; j--) {
                if(s[j] == '(') {
                    sum1++;
                }
                else {
                    sum1--;
                }
                if(sum1 > 0) {
                    positive = true;
                }
            }
            if(!positive) {
                m[sum]++;
            }
        }
    }
    for(pair<int64,int64> p : m) {
        if(p.first > 0) {
            if(m.count(-p.first)) {
                ans += min(p.second, m[-p.first]);
            }
        }
        else if(p.first == 0) {
            ans += p.second / 2;
        }
    }
    cout << ans;
    return 0;
}