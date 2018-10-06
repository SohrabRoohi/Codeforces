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
    vector<pair<int,int>> laptops;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        laptops.push_back(make_pair(a, b));
    }
    sort(laptops.begin(), laptops.end());
    int minCost, maxQuality;
    minCost = laptops[0].first;
    maxQuality = laptops[0].second;
    for(int i = 0; i < laptops.size(); i++) {
        if(laptops[i].first == minCost) {
            if(laptops[0].second > maxQuality) {
                maxQuality = laptops[0].second;
            }
        }
        else {
            if(laptops[i].second < maxQuality) {
                cout << "Happy Alex";
                return 0;
            }
            else {
                minCost = laptops[i].first;
                maxQuality = laptops[i].second;
            }
        }
    }
    cout << "Poor Alex";
    return 0;
}