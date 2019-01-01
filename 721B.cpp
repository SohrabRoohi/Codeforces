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

    int n, k;
    cin >> n >> k;

    map<int,int> m;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s.length()]++;
    }
    string s;
    cin >> s;
    int goal = s.length();
    int wrong = 0;
    int time = 0;
    int bestTime, worstTime;
    for(pair<int,int> p : m) {
        if(p.first == goal) {
            bestTime = time + 1;
            if(p.second > 1) {
                while(p.second > 1) {
                    wrong++;
                    time++;
                    p.second--;
                    if(wrong % k == 0) {
                        time += 5;
                    }
                }
                worstTime = time + 1;
            }
            else {
                worstTime = bestTime;
            }
        }
        else {
            while(p.second > 0) {
                wrong++;
                p.second--;
                time++;
                if(wrong % k == 0) {
                    time += 5;
                }
            }
        }
    }
    cout << bestTime << " " << worstTime;
}