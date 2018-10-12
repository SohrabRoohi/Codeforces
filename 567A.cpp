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
    vector<int64> cities;
    for(int i = 0; i < n; i++) {
        int64 x;
        cin >> x;
        cities.push_back(x);
    }

    int64 leftMax = 0;
    int64 rightMax = 0;
    for(int i = 0; i < n - 1; i++) {
        rightMax += abs(cities[i] - cities[i+1]);
    }
    for(int i = 0; i < n; i++) {
        if(i != 0) {
            leftMax += abs(cities[i]-cities[i-1]);
            rightMax -= abs(cities[i]-cities[i-1]);
        }
        int64 leftMin = LLONG_MAX;
        if(i - 1 >= 0) {
            leftMin = abs(cities[i] - cities[i-1]);
        }
        int64 rightMin = LLONG_MAX;
        if(i + 1 < n) {
            rightMin = abs(cities[i] - cities[i+1]);
        }
        int64 minV = min(leftMin, rightMin);
        int64 maxV = max(leftMax, rightMax);
        cout << minV << " " << maxV << endl;
    }
    return 0;
}