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

struct compare {
    bool operator()(const std::string& first, const std::string& second) {
        return first.size() < second.size();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<string,int> index1, index2;
    unordered_map<string,vector<char>> m1, m2;
    int n;
    cin >> n;
    vector<string> a, b;
    for(int i = 0; i < 2 * n - 2; i++) {
        string s;
        cin >> s;
        a.push_back(s);
        b.push_back(s);
    }
    compare c;
    sort(a.rbegin(), a.rend(), c);
    string s1 = "";
    string s2 = "";
    s1 += a[0][0];
    s1 += a[1];
    s2 += a[1][0];
    s2 += a[0];
    string ans1 = "";
    string ans2 = "";

    bool first = true;
    bool second = true;
    for(int i = 0; i < b.size(); i += 2) {
        string l = a[i];
        string r = a[i+1];
        index1[l] = 0;
        index1[r] = 0;
        index2[l] = 0;
        index2[r] = 0;

        string pre1 = s1.substr(0, l.size());
        string pre2 = s2.substr(0, l.size());
        string suf1 = s1.substr(s1.size() - l.size(), l.size());
        string suf2 = s2.substr(s2.size() - l.size(), l.size());

        if(l == pre1) {
            m1[l].push_back('P');
        }
        else if(l == suf1) {
            m1[l].push_back('S');
        }
        else {
            first = false;
        }

        if(r == suf1) {
            m1[r].push_back('S');
        }
        else if(r == pre1) {
            m1[r].push_back('P');
        }
        else {
            first = false;
        }

        if(l == pre2) {
            m2[l].push_back('P');
        }
        else if(l == suf2) {
            m2[l].push_back('S');
        }
        else {
            second = false;
        }

        if(r == suf2) {
            m2[r].push_back('S');
        }
        else if(r == pre2) {
            m2[r].push_back('P');
        }
        else {
            second = false;
        }
    }
    if(first) {
        string ans = "";
        for(int i = 0; i < b.size(); i++) {
            ans += m1[b[i]][index1[b[i]]];
            index1[b[i]]++;
        }
        cout << ans;
    }
    else {
        string ans = "";
        for(int i = 0; i < b.size(); i++) {
            ans += m2[b[i]][index2[b[i]]];
            index2[b[i]]++;
        }
        cout << ans;
    }
    return 0;
}