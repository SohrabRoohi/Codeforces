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
    string s;
    cin >> s;
    vector<int> segment;
    vector<int> dist;
    int count = 0;
    int cur = 0;
    int sLength = 0;
    bool on = false;
    bool added = false;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'G' && !on) {
            on = true;
            cur = 1;
            if(sLength != 0 && added) {
                dist.push_back(sLength);
            }
            sLength = 0;
        }
        else if(s[i] == 'S' && on) {
            on = false;
            if(cur != 0) {
                added = true;
                segment.push_back(cur);
            }
            cur = 0;
            sLength = 1;
        }
        else if(s[i] == 'S' && !on) {
            if(!added) {
                sLength = 0;
            }
            else {
                sLength++;
            }
        }
        else if(s[i] == 'G' && on) {
            cur++;
        }
        if(i == n - 1) {
            if(cur != 0) {
                added = true;
                segment.push_back(cur);
            }

            if(sLength != 0) {
                dist.push_back(sLength);
            }
        }
    }
    int maxSegment = 0;
    for(int i : segment) {
        maxSegment = max(maxSegment, i);
    }
    if(segment.empty()) {
        cout << 0;
        return 0;
    }
    if(segment.size() == 1) {
        cout << maxSegment;
        return 0;
    }
    if(segment.size() >= 2) {
        maxSegment = maxSegment + 1;
    }
    for(int i = 0; i < dist.size(); i++) {
        if (dist[i] == 1) {
            if (segment[i] + segment[i + 1] + 1 > maxSegment && (segment.size() > 2)) {
                maxSegment = segment[i] + segment[i + 1] + 1;
            } else if (segment[i] + segment[i + 1] > maxSegment) {
                maxSegment = segment[i] + segment[i + 1];
            }
        }
    }
    cout << maxSegment;
    return 0;
}