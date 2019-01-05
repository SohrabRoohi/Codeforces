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
    
    string s;
    cin >> s;
    int k;
    cin >> k;
    //? - candy cane
    //* - snowflake
    string removed = "";
    for(char c : s) {
        if(isalpha(c)) {
            removed += c;
        }
    }
    vector<pair<bool,int>> v(removed.length(), make_pair(true, 1));
    string ans = "";
    bool flake = false;
    int64 index = v.size() - 1;
    for(int i = s.length() - 1; i >= 0; i--) {
        if(s[i] != '?' && s[i] != '*') {
            index--;
        }
        else if(s[i] == '?') {
            i--;
            v[index].first = false;
            v[index].second = 0;
            index--;
        }
        else if(s[i] == '*') {
            i--;
            v[index].first = false;
            v[index].second = 0;
            index--;
            flake = true;
        }
    }
    for(int i = 0; i < v.size(); i++) {
        if(v[i].first) {
            for(int j = 0; j < v[i].second; j++) {
                ans += removed[i];
            }
        }
    }
    if(k == ans.length()) {
        cout << ans;
        return 0;
    }
    if(k < ans.length()) {
        cout << "Impossible";
        return 0;
    }
    if(k > ans.length() && flake) {
        int64 index = v.size() - 1;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(s[i] != '?' && s[i] != '*') {
                index--;
            }
            else if(s[i] == '?') {
                i--;
                index--;
            }
            else if(s[i] == '*') {
                i--;
                v[index].first = true;
                v[index].second = k - ans.length();
                index--;
                break;
            }
        }
        ans = "";
        for(int i = 0; i < v.size(); i++) {
            if(v[i].first) {
                for(int j = 0; j < v[i].second; j++) {
                    ans += removed[i];
                }
            }
        }
        cout << ans;
        return 0;
    }
    else if(k > ans.length() && !flake) {
        int64 index = v.size() - 1;
        int length = ans.length();
        for(int i = s.length() - 1; i >= 0; i--) {
            if(s[i] != '?' && s[i] != '*') {
                index--;
            }
            else if(s[i] == '?') {
                i--;
                v[index].first = true;
                v[index].second = 1;
                length++;
                if(length == k) {
                    break;
                }
                index--;
            }
            else if(s[i] == '*') {
                i--;
                index--;
            }
        }
        ans = "";
        for(int i = 0; i < v.size(); i++) {
            if(v[i].first) {
                for(int j = 0; j < v[i].second; j++) {
                    ans += removed[i];
                }
            }
        }
        if(ans.length() != k) {
            cout << "Impossible";
        }
        else {
            cout << ans;
        }
    }


    return 0;
}