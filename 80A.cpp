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
    
    unordered_map<int,int> index;
    int n, m;
    cin >> n >> m;
    int num = 1;
    for(int i = 2; i <= 50; i++) {
        bool is = true;
        for(int j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                is = false;
                break;
            }
        }
        if(is) {
            index[i] = num;
            num++;
        }
    }
    if(!index.count(m)) {
        cout << "NO";
        return 0;
    }
    if(index[n] == index[m] - 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}