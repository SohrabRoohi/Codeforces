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

//If you are looking at my solution this is just a shortcut method and is not always used
vector<string> split(string input, char c) {
    stringstream test(input);
    string segment;
    vector<string> list;
    while(getline(test, segment, c))
    {
        list.push_back(segment);
    }
    return list;
}
int64 time(vector<int64> values, int64 m) {
    int64 time = 0;
    for(int i = 0; i < values.size(); i++) {
        int64 distance = 0;
        if(i == 0) {
            distance = values[i];
        }
        else if(i % 2 == 0) {
            distance = values[i] - values[i-1];
        }
        else {
            continue;
        }
        time += distance;
    }
    if(values.size() % 2 == 0) {
        time += m - values[values.size() - 1];
    }
    return time;
}

int64 findDiff(vector<int64> values, int64 m) {
    int largestDiff = 0;
    for(int i = 0; i < values.size(); i++) {
        int diff = 0;
        if(i == 0) {
            diff = values[i];
        }
        else {
            diff = values[i] - values[i-1];
        }
        if(diff > largestDiff) {
            largestDiff = diff;
        }
    }
    int lastDiff = m - values[values.size() - 1];
    if(lastDiff > largestDiff) {
        largestDiff = lastDiff;
    }
    return largestDiff;
}

vector<int64> findLocations(int64 largestDiff, vector<int64> values, int64 m) {
    vector<int64> locations;
    for(int i = 0; i < values.size(); i++) {
        int diff = 0;
        if(i == 0) {
            diff = values[i];
        }
        else {
            diff = values[i] - values[i-1];
        }
        if(diff == largestDiff) {
            locations.push_back(i);
        }
    }
    int lastDiff = m - values[values.size() - 1];
    if(lastDiff == largestDiff) {
        locations.push_back(values.size() - 1);
    }
    return locations;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;

    int64 n, m;
    cin >> n >> m;
    vector<int64> values;
    for(int i = 0; i < n; i++) {
        int64 a;
        cin >> a;
        values.push_back(a);
    }
    int64 maxTime = time(values,m);
    int64 largestDiff = findDiff(values,m);
    vector<int64> locations = findLocations(largestDiff, values, m);
    if(locations.size() == values.size() + 1) {
        cout << maxTime;
        return 0;
    }
    for(int i = 0; i < locations.size(); i++) {
        int64 current = values[locations[i]];
        int64 next = values[locations[i]+1];
        int64 previous = values[locations[i]-1];
        vector<int64> nV;
        vector<int64> pV;
        for(int j = 0; j < n; j++) {
            nV.push_back(values[j]);
            pV.push_back(values[j]);
        }
        if(i == 0 && values[i] - 1 != 0) {
            pV.push_back(values[i] - 1);
        }
        else if(i == n - 1 && values[i] + 1 != m) {
            nV.push_back(values[i] + 1);
        }
        else {
            if(current != previous + 1) {
                pV.push_back(values[i] - 1);
            }
            if(current != next - 1) {
                nV.push_back(values[i] + 1);
            }
        }
        sort(nV.begin(), nV.end());
        sort(pV.begin(), pV.end());
        int64 pTime = time(pV, m);
        int64 nTime = time(nV, m);
        if(pTime > maxTime) {
            maxTime  = pTime;
        }
        if(nTime > maxTime) {
            maxTime = nTime;
        }
    }
    cout << maxTime;
    return 0;
}