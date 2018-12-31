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
    
    unordered_map<int,int> counts;
    for(int i = 0; i < 6; i++) {
        int v;
        cin >> v;
        counts[v]++;
    }
    bool found = false;
    bool two = false;
    bool one = false;
    int vals[2] = {};
    int index = 0;
    for(pair<int,int> p : counts) {
        if(p.second == 4) {
            found = true;
        }
        else if(p.second == 6) {
            found = true;
            two = true;
        }
        else if(p.second == 5) {
            found = true;
            one = true;
        }
        else if(p.second == 2){
            two = true;
        }
        else if(p.second == 1) {
            one = true;
        }
    }
    if(found && two) {
        cout << "Elephant";
    }
    else if(found && one) {
        cout << "Bear";
    }
    else {
        cout << "Alien";
    }

    return 0;
}