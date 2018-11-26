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
    
    string s, t;
    cin >> s >> t;
    int x1 = (int)(s[0] - 'a');
    int y1 = 8 - (int)(s[1]-'0');
    int x2 = (int)(t[0]-'a');
    int y2 = 8 - (int)(t[1]-'0');
    vector<string> steps;
    while(x1 != x2 || y1 != y2) {
        if(x1 < x2 && y1 < y2) {
            steps.push_back("RD");
            x1++;
            y1++;
        }
        else if(x1 > x2 && y1 > y2) {
            steps.push_back("LU");
            x1--;
            y1--;
        }
        else if(x1 < x2 && y1 > y2) {
            steps.push_back("RU");
            x1++;
            y1--;
        }
        else if(x1 > x2 && y1 < y2) {
            steps.push_back("LD");
            x1--;
            y1++;
        }
        else if(x1 < x2) {
            steps.push_back("R");
            x1++;
        }
        else if(x1 > x2) {
            steps.push_back("L");
            x1--;
        }
        else if(y1 < y2) {
            steps.push_back("D");
            y1++;
        }
        else if(y1 > y2) {
            steps.push_back("U");
            y1--;
        }
    }
    cout << steps.size() << endl;
    for(string s : steps) {
        cout << s << endl;
    }
    return 0;
}