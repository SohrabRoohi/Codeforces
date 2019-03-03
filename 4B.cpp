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
    
    int d, sumTime;
    cin >> d >> sumTime;
    int lowerBound = 0;
    int upperBound = 0;
    vector<pair<int,int>> v;
    for(int i = 0; i < d; i++) {
        int minTime, maxTime;
        cin >> minTime >> maxTime;
        v.push_back(make_pair(minTime,maxTime));
        lowerBound += minTime;
        upperBound += maxTime;
    }
    if(!(sumTime >= lowerBound && sumTime <= upperBound)) {
        cout << "NO";
        return 0;
    }
    else {
        cout << "YES" << endl;
        VI times;
        for(auto p : v) {
            times.push_back(p.second);
        }
        for(int i = 0; i < v.size() && upperBound > sumTime; i++) {
            int toSub = min(v[i].second - v[i].first, abs(upperBound - sumTime));
            times[i] -= toSub;
            upperBound -= toSub;
        }
        for(int ii : times) {
            cout << ii << " ";
        }
        cout << endl;
    }
    return 0;
}