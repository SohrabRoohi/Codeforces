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

    map<char,int> weights;
    weights['q'] = 9;
    weights['r'] = 5;
    weights['b'] = 3;
    weights['n'] = 3;
    weights['p'] = 1;
    weights['k'] = 0;

    int w = 0;
    int b = 0;

    for(int i = 0; i < 8; i++) {
        string line;
        cin >> line;
        for(int j = 0; j < 8 ; j++) {
            char cur = line[j];
            if(isalpha(cur)) {
                if(isupper(cur)) {
                    w += weights[tolower(cur)];
                }
                else {
                    b += weights[cur];
                }
            }
        }
    }
    if(w > b) {
        cout << "White";
    }
    else if(w < b) {
        cout << "Black";
    }
    else {
        cout << "Draw";
    }
    return 0;
}