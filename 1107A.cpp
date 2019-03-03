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
    
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int index = n % 2 == 1 ? n / 2 : n /2 - 1;
        string first = "";
        string second = "";
        if(n == 2) {
            if(s[0] >= s[1]) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
                cout << 2 << endl;
                cout << s[0] << " " << s[1] << endl;
            }
            goto skip;
        }
        for(int j = 0; j < index; j++) {
            first += s[j];
        }
        for(int j = index; j < s.length(); j++) {
            second += s[j];
        }
        cout << "YES" << endl;
        cout << 2 << endl;
        cout << first << " " << second << endl;
        skip:
        continue;
    }
    return 0;
}