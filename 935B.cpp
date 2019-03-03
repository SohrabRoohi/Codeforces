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

bool isLeft(pair<int,int> p){
    if(p.second > p.first) {
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    int x = 0;
    int y = 0;
    vector<pair<int,int>> points;
    for(char c : s) {
        if(c == 'U') {
            y++;
        }
        else {
            x++;
        }
        points.push_back(make_pair(x,y));
    }
    for(int i = 0; i < points.size(); i++) {
        if(i != points.size() - 1 && points[i].first == points[i].second) {
            if(isLeft(points[i-1]) != isLeft(points[i+1])) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}