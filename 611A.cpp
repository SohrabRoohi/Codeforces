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
    
    int days[] = {31, 29, 31, 30, 31, 30, 31 , 31, 30, 31, 30, 31};
    int w = 4;
    int week[7] = {};
    int day[32] = {};
    for(int i = 0; i < 12; i++) {
        for(int j = 1; j <= days[i]; j++) {
            week[w]++;
            w = (w + 1) % 7;
            day[j]++;
        }
    }
    int num;
    cin >> num;
    string skip, type;
    cin >> skip >> type;
    if(type == "week") {
        cout << week[num-1];
    }
    else {
        cout << day[num];
    }
    return 0;
}