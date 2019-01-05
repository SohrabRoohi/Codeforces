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
    
    for(int n = 1; n <= 1e6; n++) {
        int64 count = 0;
        VI a;
        for(int i = 1; i <= n; i++) {
            a.push_back(i);
        }
        string s = "";
        do {
            for (int j = 0; j < n; j++) {
                s += to_string(a[j]);
            }
        }
        while(next_permutation(a.begin(), a.end()));
        for(int i = 0; i < s.length() + 1 - n; i++) {
            int sum = 0;
            for(int j = i; j < i + n; j++) {
                sum += (int)(s[j] - '0');
            }
            if(sum == (n* (n+1) / 2)) {
                count++;
            }
        }
        cout << n << " " << count << endl;
    }
    return 0;
}