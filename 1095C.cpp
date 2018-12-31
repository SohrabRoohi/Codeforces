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
    
    int64 n;
    cin >> n;
    int64 k;
    cin >> k;
    string s = bitset<64>(n).to_string();
    map<int64,int64> m;
    int64 count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[s.length() - 1 - i] == '1') {
            m[pow(2,i)]++;
            count++;
        }
    }
    if(k < count) {
        cout << "NO";
        return 0;
    }
    for(int64 i = 32; i >= 1 && k > count; i--) {
        int64 power = (int64)pow(2,i);
        int64 lowPower = (int64)pow(2,i-1);
        while(m[power] > 0 && k > count) {
            m[power]--;
            m[lowPower] += 2;
            count++;
        }
    }
    if(count != k) {
        cout << "NO";
    }
    else {
        cout << "YES" << endl;
        for(pair<int64,int64> p : m) {
            for(int i = 0; i < p.second; i++) {
                cout << p.first << " ";
            }
        }
    }
    return 0;
}