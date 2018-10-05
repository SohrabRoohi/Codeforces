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
    vector<int64> values;
    for(int i = 0; i < n; i++) {
        int64 value;
        cin >> value;
        values.push_back(value);
    }
    int64 first = values[0];
    int64 next = values[0];
    values.erase(values.begin());
    vector<int64> ordered = {first};
    bool end = false;
    while(!end) {
        if(next % 3 == 0 && find(values.begin(), values.end(), next / 3) != values.end()) {
            ordered.push_back(next / 3);
            values.erase(find(values.begin(), values.end(), next / 3));
            next /= 3;
        }
        else if(find(values.begin(), values.end(), next * 2) != values.end()) {
            ordered.push_back(next * 2);
            values.erase(find(values.begin(), values.end(), next * 2));
            next *= 2;
        }
        else {
            end = true;
        }
    }
    bool backward = false;
    int64 last = first;
    while(!backward) {
        if(find(values.begin(), values.end(), last * 3) != values.end()) {
            ordered.insert(ordered.begin(), last * 3);
            values.erase(find(values.begin(), values.end(), last * 3));
            last *= 3;
        }
        else if(find(values.begin(), values.end(), last / 2) != values.end() && last % 2 == 0) {
            ordered.insert(ordered.begin(), last / 2);
            values.erase(find(values.begin(), values.end(), last / 2));
            last /= 2;
        }
        else {
            backward = true;
        }
    }
    for(int i = 0; i < ordered.size(); i++) {
        cout << ordered[i] << " ";
    }
    return 0;
}