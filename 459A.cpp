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
    
    int x1, y1, x2 ,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int xDist = abs(x1-x2);
    int yDist = abs(y1-y2);
    int x3, y3, x4, y4;
    bool diagonalGiven = false;
    if(x1 != x2 && y1 != y2) {
        diagonalGiven = true;
    }
    if(diagonalGiven && xDist != yDist) {
        cout << -1;
        return 0;
    }
    if(diagonalGiven) {
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
    }
    else {
       if(xDist == 0) {
           x3 = x1 + yDist;
           x4 = x2 + yDist;
           y3 = y1;
           y4 = y2;
       }
       else {
           y3 = y1 + xDist;
           y4 = y2 + xDist;
           x3 = x1;
           x4 = x2;
       }
    }
    cout << x3 << " " << y3 << " " << x4 << " " << y4;
    return 0;
}