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

    int64 n, k;
    cin >> n >> k;
    int64 sum = 0;
    queue<pair<int64,double>> q;
    unordered_map<int64,int64> m;
    unordered_map<int64,int64> c;
    for(int i = 0; i < n; i++) {
        int64 v;
        cin >> v;
        sum += v;
        q.push(make_pair(i, (double)v));
        m[i] = v;
    }
    vector<pair<int64,double>> v;
    unordered_set<int64> ans;
    double full = 0;
    while(!q.empty() || !v.empty()) {
        for(int i = 0; i < v.size(); i++) {
            if(abs(v[i].second)  <= 1e-4) {
                v.erase(v.begin() + i);
                i--;
                full++;
            }
        }
        if(v.size() < k && !q.empty()) {
            int64 minV = min(k - v.size(), (int64)q.size());
            for(int i = 0; i < minV; i++) {
                auto p = q.front();
                q.pop();
                v.push_back(p);
                c[p.first] = 0;
            }
        }
        double percent = round(100 * (full / n));
        for(int i = 0; i < v.size(); i++) {
            if(abs(v[i].second - round(v[i].second)) <= 1e-4) {
                c[v[i].first]++;
            }
            v[i].second -= .2;
            int64 test = c[v[i].first];
            if(percent == test) {
                ans.insert(v[i].first);
            }
        }
    }
    cout << ans.size();
    return 0;
}