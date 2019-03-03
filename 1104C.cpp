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
    //0 vertical | 1 horizontal
    map<pair<int,int>, bool> m;
    pair<int,int> v1 = make_pair(1,1);
    pair<int,int> v2 = make_pair(3,1);
    pair<int,int> h1 = make_pair(4,3);
    pair<int,int> h2 = make_pair(4,1);
    m[v1] = false;
    m[v2] = false;
    m[h1] = false;
    m[h2] = false;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '0') {
            if(m[v1]) {
                cout << v2.first << " " << v2.second << endl;
                m[v1] = false;
            }
            else {
                m[v1] = true;
                cout << v1.first << " " << v1.second << endl;
            }
        }
        else {
            if(m[h1]) {
                cout << h2.first << " " << h2.second << endl;
                m[h1] = false;
            }
            else {
                m[h1] = true;
                cout << h1.first << " " << h1.second << endl;
            }
        }
    }
    return 0;
}