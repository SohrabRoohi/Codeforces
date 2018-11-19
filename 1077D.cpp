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

    int n, k;
    cin >> n >> k;

    unordered_map<int,int> counts;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        counts[v]++;
    }
    vector<pair<int,int>> result;
    for(pair<int,int> p : counts) {
        result.push_back(make_pair(p.second, p.first));
    }
    sort(result.begin(), result.end());
    vector<int> answer;
    for(int i = result.size() - 1; i >= 0 && k > 0; i--) {
        if(i - 1 >= 0) {
            int m = result[i].first / result[i-1].first;
            result[i].first -= result[i-1].first * m;
            for(int j = 0; j < m && k > 0; j++) {
                answer.push_back(result[i].second);
                k--;
            }
        }
        else {
            priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int> >> p;
            for(int i = 0; i < result.size(); i++) {
                if(result[i].first != 0) {
                    p.push(result[i]);
                }
            }
            while(k > 0) {
                pair<int,int> cur = p.top();
                answer.push_back(cur.second);
                k--;
                p.pop();
                cur.first--;
                if(cur.first >= 1) {
                    p.push(cur);
                }
            }
        }
    }


    end:
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    
    return 0;
}