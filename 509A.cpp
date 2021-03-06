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

    int arr[10][10] = {};
    for(int i = 0; i < 10; i++) {
        arr[i][0] = 1;
        arr[0][i] = 1;
    }
    for(int i = 1; i < 10; i++) {
        for(int j = 1; j < 10; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    int n;
    cin >> n;
    cout << arr[n-1][n-1];
    
    return 0;
}