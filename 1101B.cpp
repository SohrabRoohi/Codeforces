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
    int fB, lB;
    fB = -1;
    lB = -1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '[') {
            fB = i;
            break;
        }
    }
    for(int i = s.length() - 1; i >= 0; i--) {
        if(s[i] == ']') {
            lB = i;
            break;
        }
    }
    if(fB == -1 || lB == -1 || lB < fB) {
        cout << -1;
        return 0;
    }
    int fC = -1;
    int lC = -1;
    for(int i = fB + 1; i < lB; i++) {
        if(s[i] == ':') {
            fC = i;
            break;
        }
    }
    for(int i = lB - 1; i > fB; i--) {
        if(s[i] == ':') {
            lC = i;
            break;
        }
    }
    if(fC == -1 || lC == -1 || fC == lC) {
        cout << -1;
        return 0;
    }
    int count = 0;
    for(int i = fC + 1; i < lC; i++) {
        if(s[i] == '|') {
            count++;
        }
    }
    cout << 4 + count;
    return 0;
}