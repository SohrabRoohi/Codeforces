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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    VI values;
    int max = 0;
    int maxIndex = 0;
    for(int i = 0; i < n; i++) {
        int value;
        cin >> value;
        values.push_back(value);
        if(value > max) {
            max = value;
            maxIndex = i;
        }
    }
    int min = values[n-1];
    int minIndex = n-1;
    for(int i = n - 1; i >= 0; i--) {
        if(values[i] < min) {
            min = values[i];
            minIndex = i;
        }
    }
    int crossover = 0;
    if(minIndex < maxIndex) {
        crossover++;
    }
    int distance = maxIndex + (n - 1 - minIndex) - crossover;
    cout << distance;
    return 0;
}