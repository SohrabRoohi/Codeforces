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
    vector<int> hI, aI, rI, dI;
    vector<int64> arr;
    for(int i = 0; i < n; i++) {
        int64 v;
        cin >> v;
        arr.push_back(v);
    }
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
        if(c == 'h') {
            hI.push_back(i);
        }
        else if(c == 'a') {
            aI.push_back(i);
        }
        else if(c == 'r') {
            rI.push_back(i);
        }
        else if(c == 'd') {
            dI.push_back(i);
        }
    }
    vector<vector<bool>> crucial(n, vector<bool>(2, false));
    bool h = false;
    bool a = false;
    bool r = false;
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
        if(c == 'h') {
            h = true;
            crucial[i][0] = true;
        }
        else if(c == 'a') {
            if(h) {
                crucial[i][0] = true;
                a = true;
            }
        }
        else if(c == 'r') {
            if(a) {
                crucial[i][0] = true;
                r = true;
            }
        }
        else if(c == 'd') {
            if(r) {
                crucial[i][0] = true;
            }
        }
    }
    a = false;
    r = false;
    bool d = false;
    for(int i = s.length() - 1; i >= 0; i--) {
        char c = s[i];
        if(c == 'h') {
            if(a) {
                crucial[i][1] = true;
            }
        }
        else if(c == 'a') {
            if(r) {
                crucial[i][1] = true;
                a = true;
            }
        }
        else if(c == 'r') {
            if(d) {
                crucial[i][1] = true;
                r = true;
            }
        }
        else if(c == 'd') {
            d = true;
            crucial[i][1] = true;
        }
    }
    unordered_map<char,int64> m;
    for(int i = 0; i < s.length(); i++) {
        if(crucial[i][0] && crucial[i][1]) {
            m[s[i]] += arr[i];
        }
    }
    cout << min(m['h'], min(m['a'], min(m['r'], m['d'])));
    return 0;
}