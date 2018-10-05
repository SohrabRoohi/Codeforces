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
    ifstream in("C:\\Users\\Sohrab\\CLionProjects\\UFPTTryouts2018\\input.txt");
    cin.rdbuf(in.rdbuf());
    ofstream out("C:\\Users\\Sohrab\\CLionProjects\\UFPTTryouts2018\\output.txt");
    cout.rdbuf(out.rdbuf());
     */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<char>> values;
    for(int i = 0; i < n; i++) {
        vector<char> toPush;
        for(int j = 0; j < 5; j++) {
            char push;
            cin >> push;
            toPush.push_back(push);
        }
        values.push_back(toPush);
    }
    bool found = false;
    for(int i = 0; i < values.size(); i++) {
        if(values[i][0] == 'O' && values[i][1] == 'O') {
            found = true;
            values[i][0] = '+';
            values[i][1] = '+';
            break;
        }
        else if(values[i][3] == 'O' && values[i][4] == 'O') {
            found = true;
            values[i][3] = '+';
            values[i][4] = '+';
            break;
        }
    }
    if(!found) {
        cout << "NO";
    }
    else {
        cout << "YES" << endl;
        for(int i = 0; i < values.size(); i++) {
            for(int j = 0; j < values[0].size(); j++) {
                cout << values[i][j];
            }
            cout << endl;
        }
    }


    return 0;
}