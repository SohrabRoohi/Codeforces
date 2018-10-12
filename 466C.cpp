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
    
    int n;
    cin >> n;
    int sum = 0;
    vector<int64> values;
    for(int i = 0; i < n; i++) {
        int64 v;
        cin >> v;
        sum += v;
        values.push_back(v);
    }
    if(sum % 3 != 0) {
        cout << 0;
        return 0;
    }
    int S = sum / 3;
    vector<int64> distance;
    distance.push_back(sum);
    for(int i = 0; i < n - 1; i++) {
        distance.push_back(distance[i] - values[i]);
    }

    cout << count;
    return 0;
}